/*Write C++ program with a function that receives n as a parameter, calculates and returns the sum of its digits using recursion. Call this function from the main and print the result; n is user input.*/
//RPOBLEM-2
//Full-name: Juramirzaev Akbarjon
//ID: 210014

#include <iostream>

using namespace std;

// int sum = 0;
int r_sum = 0;

int digit_sum(int n) {
    if(n > 0) {
        ::r_sum += n % 10;
        return digit_sum(n / 10);
    } else {
        return ::r_sum;
    }
}

int main() {
    
    int number;
    cout << "enter the number to get sum of digits: ";
    cin >> number;
    int sum = 0;
    //function call
    cout << "Sum of digits is: " << digit_sum(number) << endl;

    return 0;
}
