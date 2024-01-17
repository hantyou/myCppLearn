#include <iostream>
#include <Eigen>
using namespace std;
// include library that are required for matrix operations

// define a function that performs matrix multiplication using Eigen3


int main() {
    std::cout << "This file operate a matrix multiplication." << std::endl;
    // define matrix A and B
    float A[2][3] = {{1,2,3},{4,5,6}};
    float B[3][2] = {{1,2},{3,4},{5,6}};
    // print out matrix A and B
    cout << "Matrix A:" << endl;
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Matrix B:" << endl;
    for (int i=0; i<3; i++){
        for (int j=0; j<2; j++){
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    // define matrix C as the result of A*B
    float C[2][2] = {{0,0},{0,0}};
    // calculate the result
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            for (int k=0; k<3; k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    // print out the result
    cout << "Matrix C:" << endl;
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


