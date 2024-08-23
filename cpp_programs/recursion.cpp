#include<iostream>
using namespace std;

uint64_t factorial(uint64_t n);
uint64_t fibonacci(uint64_t n);

int main(){

    uint64_t n;
    int option;

    cout << "---------- Recursion Demo ----------\n1. Factorial\n2. Fibonacci" << endl;
    cout << "Select Option: ";
    cin >> option;

    switch (option)
    {
    case 1:
        cout << "Enter n: ";
        cin >> n;
        cout << n << "! = " << factorial(n) << endl;
        break;
    
    case 2:
        cout << "Enter n: ";
        cin >> n;
        cout << n << "th number of fibonacci is: " << fibonacci(n) << endl;
        break;

    default:
        return 0;
    }

}

// Very very important to have stop condition for a recursive function
uint64_t factorial(uint64_t n){
    if (n == 2) return 2;

    return n * factorial(n-1);
}

uint64_t fibonacci(uint64_t n){
    if (n == 0) return 0;
    if (n == 1) return 1;   
    return fibonacci(n-1) + fibonacci(n-2);
}