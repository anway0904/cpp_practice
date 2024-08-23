#include<iostream>
using namespace std;

// This is declaration. This is the standara way to write functions in cpp
void function();
int sum(int a, int b);

// You cannot overload funtions distinguished by return type alone
//float sum(int a, int b); ---> This is a wrong example of function overload

// This is right function overloading
double sum(double a, double b);
float sum(double a, int b);

int main(){
    cout << sum(0.1 , 1) << endl;
}

// This is the definition of the function
void function(){
    cout << "This is Definition" << endl;
}

int sum(int a, int b){
    cout << "sum(int a, int b)" << endl;
    return a+b;
}

double sum(double a, double b){
    cout << "sum(double a, double b)" << endl;
    return a+b;
}

float sum(double a, int b){
    cout << "sum(double a, int b)" << endl;
    return a+b;
}