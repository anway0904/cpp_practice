#include<iostream>
using namespace std;

class Entity {
public:
    static int s_variable;
    void Print() {
        cout << s_variable << endl;
    }
};

int Entity::s_variable;

int main() {
    Entity e1;
    Entity::s_variable = 5;

    Entity e2;
    e2.s_variable = 10;

    e1.Print();
    e2.Print();
}