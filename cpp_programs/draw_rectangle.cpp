#include<iostream>
using namespace std;

int main(){
    int rows, cols;
    char marker;

    cout << "rows: ";
    cin >> rows;

    cout << "cols: ";
    cin >> cols;

    cout << "marker: ";
    cin >> marker;

    for(int i=0 ; i < rows ; i++){
        for(int j=0 ; j<cols ; j++){
            cout << " " << marker;
        }
        cout << endl;
    }
    
}