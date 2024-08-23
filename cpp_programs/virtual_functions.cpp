#include <iostream>
#include <string>

using namespace std;

class Entity {
public:
    //This is a virtual function
    virtual void GetName() {
        cout << "Entity" << endl;
    }

    // This is a pure virtual function
    // All the classes that inherit Entity class are required to have the implementation of a pure virtual function
    // Since there is atleast one pure virtual function present in this class, this is an abstract class
    virtual void GetPlayerRank() = 0;

    // Since this is an abstract class, you cannot create a pointer which points to an instance of this class
};

class Player : public Entity {
private:
    string m_name = "Anway";
    int m_playerRank = 100;

public:
    void SetName(string name) {
        m_name = name;
    }

    // void GetName() override {
    //     cout << "Name: " << m_name << endl;
    // } 

    void GetPlayerRank() {
        cout << "Rank: " << m_playerRank << endl;
    }

};

int main() {
    Entity* p = new Player();

    p->GetName();
    p->GetPlayerRank();
}