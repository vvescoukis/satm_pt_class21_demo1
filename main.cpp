/*
 * -----------------------------------------------
    clas21_demo1
    Example with classes to represent 2 x 2 arrays
   -----------------------------------------------
*/

#include <iostream>
using namespace std;

const int N = 2;    // Do not change this!

// --- class definition
class myArray {
private:
    float det;

public:
    float data[N][N];
    myArray();
    void myArrayShow();
    void determinant();
};

// --- implementation of methods ---

// --- Determinant
void myArray::determinant() {
    det = data[0][0] * data[1][1] - data[0][1] * data[1][0];
}

// --- Constructor, reads from the console
myArray::myArray() {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            cout << "(" << i << "," << j << "): ";
            cin >> data[i][j];
        }
    determinant();
}

// --- Show data
void myArray::myArrayShow() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "(" << i << "," << j << "): ";
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
    cout << det << endl;
}


// === main ===
int main() {
    myArray A1;

    A1.myArrayShow();

    return 0;
}
