/*Write C++ program to calculate the sum of A and B, where A and B are two-dimensional arrays with size m x n. Take a user input for m(number of rows) and n(number of columns), and for every element of matrix A and B.*/
//RPOBLEM-5

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int m1_row_size; // number of rows
    cout << "1-matrix number of rows: ";
    cin >> m1_row_size;
    int m1_col_size; // number of columns
    cout << "1-matrix number of columns: ";
    cin >> m1_col_size;
    
    int m2_row_size; // number of columns
    cout << "2-matrix number of rows: ";
    cin >> m2_row_size;
    int m2_col_size; // number of rows
    cout << "2-matrix number of columns: ";
    cin >> m2_col_size;

    //matrices
    long matrix_first[m1_row_size][m1_col_size];
    long matrix_second[m2_row_size][m2_col_size];
    
    //matrix first (value request)
    for(unsigned int i = 0; i < m1_row_size; i++) {
        for(unsigned int j = 0; j < m1_col_size; j++) {
            cout << "Values of 1-matrix: {" << i << "} {" << j << "}: ";
            cin >> matrix_first[i][j];
        }
    }
    //matrix second (value request)
    for(unsigned int x = 0; x < m2_row_size; x++) {
        for(unsigned int y = 0; y < m2_col_size; y++) {
            cout << "Values of 2-matrix: {" << x << "} {" << y << "}: ";
            cin >> matrix_second[x][y];
        }
    }
    //sum of matrices
    int row_ctr = m1_row_size;
    int col_ctr = m1_col_size;
    for(unsigned int row = 0; row < row_ctr; row++) {
        for(unsigned int col = 0; col < col_ctr; col++) {
            cout << matrix_first[row][col]+matrix_second[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}
