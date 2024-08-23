#include<iostream>
using namespace std;

const int ARRAY_SIZE = 5;

class LinearSearch{
private:
    int m_key;
    int m_array[ARRAY_SIZE];

public:
    LinearSearch() {
        cout << "Enter 5 array elements: " << endl;
        for(int i=0 ; i<ARRAY_SIZE ; i++) {
            cout << "Element " << i+1 << ": ";
            cin >> m_array[i];
        }
    }
    void SetKey(int key) {
        m_key = key;
    }
    void DisplayArray() {
        
        for(int i=0 ; i<ARRAY_SIZE ; i++) {
            cout << m_array[i] << " ";
        }
        cout << endl;
    }
    int SearchKey() {
        for(int i=0 ; i<ARRAY_SIZE ; i++) {
            if(m_key == m_array[i]) {
                cout << "Element found at index " << i << endl;
                return i;
            }
        }
        cout << "Element not found in the array" << endl;
        return -1;
    }
};

int main() {
    LinearSearch linearSearch;
    linearSearch.DisplayArray();
    linearSearch.SetKey(5);
    linearSearch.SearchKey();
}