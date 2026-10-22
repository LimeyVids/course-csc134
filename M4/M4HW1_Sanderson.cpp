// CSC 134
// Sandersonl
// 10/22/26
// M4HW1 - create a program that prints a multiplication table 

#include <iostream>
using namespace std;

int main(){
    double number;
    cout << "Enter a number from 1-12" << endl;
    cout << "Input: ";
    cin >> number;
    while(number <=0 || number > 12){
        cout << "Error number not between 1-12 or unknown input." << endl;
        cout << "Please enter a value from 1-12" << endl << "Input: ";
        cin >> number;
    }

    cout << "=================" << endl;
for (int i = 1; i <= number; i++){
    double answer = number * i;
    cout << number << " times " << i << " is " << answer << endl;
}




}