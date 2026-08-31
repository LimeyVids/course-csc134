// One line comment
/*
Block comment
M1T1 - Hello World
Sanderson
8/19/26
First program - just a smoke test.
*/

// magic words to start up
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello CSC 134!" << endl;
    // name is a VERIABLE - a noun
    string name;
    cout << "What is your name? ";
    cin  >> name; // input - reads the name into this variable

    cout << "This program is for: " << name << endl;
    string Enter;
    cout << "Press Enter to close program";
    cin  >> Enter;
    return 0; // no errors

    // One more comment.
}
