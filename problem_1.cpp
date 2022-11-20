/*Write C++ program that has a function multiply with two parameters:x and y. This function should perform simple multiplication, but only with ”+” and ”-” operators using recursion. Call this function from the main and print the result; x and y are user inputs. DO NOT USE ”*” OPERATOR.*/
//RPOBLEM-1
//Full-name: Juramirzaev Akbarjon
//ID: 210014

#include <iostream>

using namespace std;

// global variable
int total = 0;

// recursion function to get multiplication 
int multiplication(int a, int b) { 
    if(b <= 0) {
        return ::total;
    } else {
        ::total += a;
        return multiplication(a, b - 1);
    }
}

int main() {
    
    int x;
    cout << "enter the first number: ";
    cin >> x;
    int y;
    cout << "enter the second number: ";
    cin >> y;
    //recursion function call
    cout << "Multiplication is: " << multiplication(x, y);
    

    return 0;
}
