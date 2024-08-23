#include<iostream>
using namespace std;

void swap(int& a, int& b);
void swap(char& a, char& b);
// You cannot do function overloading for all datatypes!!

template<typename T> // You can use any name instead of T, but this is standard.
                     // You can also use "class" in place of typename
void swap_t(T& a, T& b){
    T tmp = a;
    a = b;
    b = tmp;
}

int main(){
    int a = 2, b = 3;
    cout << a << " - " << b << endl;
    swap(a, b);
    cout << a << " - " << b << endl;

    char c = 'a', d = 'b';
    cout << c << " - " << d << endl;
    swap(c, d);
    cout << c << " - " << d << endl;

    double e = 1000, f = 5000;
    cout << e << " - " << f << endl;
    swap_t<double>(e, f); // Writing <double> is not mandatory. 
    cout << e << " - " << f << endl;
    swap_t(e, f); // This should work the same as above
    cout << e << " - " << f << endl;
}


// Passing by reference
void swap(int& a, int& b){
    int tmp = a;
    a = b;
    b = tmp;
}

void swap(char& a, char& b){
    char tmp = a;
    a = b;
    b = tmp;
}