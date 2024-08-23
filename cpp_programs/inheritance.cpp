#include<iostream>
#include<string>

using namespace std;

class School {
protected:
    string m_schoolName = "ABC School";

public:
    void GetName() {
        cout << "School name: " << m_schoolName << endl;
    }

    void SetName(const string schoolName) {
        m_schoolName = schoolName;
    }
};

class Student : public School {
protected:
    string studentSchool = m_schoolName;
    
};

int main() {
    School school;
    school.GetName();
    school.SetName("Primary School");


}