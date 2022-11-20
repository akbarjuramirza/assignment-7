/*Write C++ program to calculate the row-wise sum of a two-dimensional array with size m x n. Take a user input for m(number of rows) and n(number of columns), and for every element of matrix A.*/
//RPOBLEM-4

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int size_row;
    int size_col;
    cout << "enter the number of rows: ";
    cin >> size_row;
    cout << "enter the number of columns: ";
    cin >> size_col;
    long matrix[size_row][size_col];
    long sum_row[size_row];
    
    for(unsigned int i = 0; i < size_row; i++) {
        int sum = 0; //everytime sum equals to 0 before calculating the next row
        for(unsigned int j = 0; j < size_col; j++) {
            cout << "enter the values of matrix: {" << i << "} {" << j << "}: ";
            cin >> matrix[i][j];
            sum += matrix[i][j];
        }
        sum_row[i] = sum; //sum of each row is assigned into array
    }
    for(unsigned int row = 0; row < size_row; row++) {
        for(unsigned int col = 0; col < size_col; col++) {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }
    //loop to claculate the sum of rows
    for(int z = 0; z < size_row; z++) {
        cout << sum_row[z] << endl;
    }

    return 0;
}
