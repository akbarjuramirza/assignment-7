/*Write C++ program with a function that receives n as a parameter and converts decimal n tobinary number using recursion. Call this function from the main and print the result; n is user input.*/
//RPOBLEM-3

#include <iostream>
#include <string>

using namespace std;

//global variables to store binary values and to detec the number of them
int b_arr[30];
int counter = 0;

int binary(int n) {
    if(n < 1) {
        int a = 1;
        for(int i = 0; i < ::counter; i++) {
            cout << b_arr[::counter - a];
            a++;
        }
        cout << endl;
    }
    else {
        ::b_arr[counter] = n % 2;
        ::counter++;
        return binary(n / 2);
    }
    cout << "Program ended with exit code "; // some bugs might be a beautiful feature :)
    return 0;
}

int main() {
    
    int decimal;
    cout << "enter the decimal number: ";
    cin >> decimal;
    //function call
    cout << binary(decimal);
    

    return 0;
}
