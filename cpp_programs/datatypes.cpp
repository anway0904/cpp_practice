#include<iostream>
#include<climits>

using namespace std;

int main(){
    bool bool_var = true;
    char char_var;
    int int_var;
    float float_var;
    double double_var;
    long l_int;

    cout << "Size of bool is " << sizeof(bool_var) << " bytes\n";
    cout << "Size of char is " << sizeof(char_var) << " bytes\n";
    cout << "Size of int is " << sizeof(int_var) << " bytes\n";
    cout << "Size of float is " << sizeof(float_var) << " bytes\n";
    cout << "Size of double is " << sizeof(double_var) << " bytes\n";
    cout << "Size of long int is " << sizeof(l_int) << " bytes\n";

    cout << endl;

    
    cout << "Min value of int: " << INT_MIN << endl;
    cout << "Max value of int: " << INT_MAX << endl;

    int int_max = INT_MAX;

    // Int overflows to the min value if 1 is added to the max value 
    cout << "int_max is " << int_max << " and int_max +1 is " << int_max + 1 << endl;

}