// CSC 134
// SandersonL
// 10/21/26
// M5T2 - write a C++ program that prints the numbers 1 to 10 and their squares, using one value-returning function and one void function.
// Partner- Liam, Driver, and Claude, Navigator

#include <iostream>
using namespace std;

// Function prototypes
int square(int num);
void printAnswerLine(int number, int squared);

int main() {
    // Print the numbers 1 to 10 and their squares.
    for (int i = 1; i <= 10; i++) {
        // call square(i) and store the result in a variable
        int squared = square(i);
        // call printAnswerLine() with i and that variable
        printAnswerLine(i, squared);
    }
    return 0;
}

// Return the square of num.
int square(int num) {
    // return num times num
    return num * num;
}

// Print one line of the answer, for example: 3 squared is 9
void printAnswerLine(int number, int squared) {
    cout << number << " squared is " << squared << endl;
}