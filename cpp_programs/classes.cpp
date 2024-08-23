#include<iostream>
#include<list>
using namespace std;

class Course {
private:
    string m_dept;
    int m_courseNum;
    list<string> m_students;

public:
    // The constructor is named the same as the class
    Course(string dept, int courseNum, list<string> students){
        m_dept = dept;
        m_courseNum = courseNum;
        m_students = students;
    }

    void GetInfo(){
        cout << "Department: " << m_dept << endl;
        cout << "Course Number: " << m_courseNum << endl;
        for (string student : m_students){
            cout << student << endl;
        }
    }
};

int main(){
    Course course("ECE", 2211, {"anway", "neeraj", "kaushal"} );
    course.GetInfo();
}