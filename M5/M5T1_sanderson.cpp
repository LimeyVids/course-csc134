// csc 134
// sandersonl
// 10/19/26
// M5T1

#include <iostream>
using namespace std;

//void functions
void greet();
void speak(string message);
// value-returning functions
int num_add(int num);
int num_double(int num);

int main(){
    cout << "Void Function Example" << endl;
    greet();
    speak("Hello World");
    speak("another message.");

    cout << ("Value reutning example") << endl;
    int number;
    cout << ("enter an interger: ");
    cin >> number;
    int answer = num_add(number);
    cout << "num_add(" << number << ") returns: " << answer << endl;

    answer = num_double(number);
    cout << "num_double(" << number << ") returns: " << answer << endl;

    return 0;
}

// define functions here
void greet(){
    //greet the user no arguments in or return out
    cout << "What's up?" << endl;
}

void speak(string message){
    //talk to user:
    // arguments: strgng , the message to speak
    // return: none
    // This would be useful if i wanted to speak text to look a certain way
    cout << message << endl;
}

// value-retuning functions
int num_add(int num){
    // arguments: num, the value to start with
    // return: int. num + 1
    num = num + 1;
    return num;
}
int num_double(int num){
    num *= 2; // same as num = num *2
    return num;
}