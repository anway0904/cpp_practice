#include <iostream>
#include <random>
#include<thread>
#include<chrono>

using namespace std;

class PIDController {
private:
	float m_kP = 5;
	float m_kI = 0;
	float m_kD = 0;

public:
	void setPIDGains(float kP, float kI, float kD) {
		m_kP = kP;
		m_kI = kI;
		m_kD = kD;
	}

	void getPIDGains(float kP, float kI, float kD) {
		cout << "Kp = " << m_kP << endl;
		cout << "Ki = " << m_kI << endl;
		cout << "Kd = " << m_kD << endl;
	}

	float ApplyControl(float currError, float prevError) {
		float controlSignal = (m_kP * currError) + (m_kI * (currError + prevError)) + (m_kD * (currError - prevError));
		cout << controlSignal << endl;
		return controlSignal;
	}
};

class ControlPlant : public PIDController {
private:
	float m_currPosition = 0;
	float m_Error = 0;
	float m_setPoint;
	float m_noise;
private:
	void GenerateNoise() {
		random_device rd;  // Seed for the random number generator
		mt19937 gen(rd()); // Mersenne Twister engine for random numbers
		normal_distribution<double> distribution(0.0, 1.0);
		m_noise = distribution(gen);
	}
public:
	float InitializeSetPoint(float setPoint) {
		m_setPoint = setPoint;
		return m_setPoint;
	}

	float GetCurrPosition() {
		cout << "Current Position: " << m_currPosition << endl;
		return m_currPosition;
	}

	float GetPlantOutput(float linearVelocity, float time) {
		GenerateNoise();
		float updatedPosition = m_currPosition + linearVelocity * time + m_noise;
		m_currPosition = updatedPosition;
		return m_currPosition;
	}

	float GetError() {
		m_Error = m_setPoint - m_currPosition;
		return m_Error;
	}
};

int main() {
	ControlPlant plant;
	float setPoint = plant.InitializeSetPoint(25);
	plant.setPIDGains(0.2f, 0, 0.5);

	float prevError = 0;
	float currError;
	float controlSignal;

	while (abs(plant.GetError()) > 0.01) {
		plant.GetCurrPosition();

		currError = plant.GetError();
		controlSignal = plant.ApplyControl(currError, prevError);

		plant.GetPlantOutput(controlSignal, 1);
		prevError = currError;

		this_thread::sleep_for(chrono::milliseconds(500));
	}

	plant.GetCurrPosition();
}