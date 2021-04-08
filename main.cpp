#include <iostream>

using namespace std;

const int N = 2;


class myArray {
private:
    float det;

public:
    float data[N][N];
    myArray();
    void myArrayShow();
    void determinant();
};

void myArray::determinant() {
    det = data[0][0] * data[1][1] - data[0][1] * data[1][0];
}


myArray::myArray() {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            cout << "(" << i << "," << j << "): ";
            cin >> data[i][j];
        }
    determinant();
}

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


int main() {
    myArray A1;

    A1.myArrayShow();

    return 0;
}
