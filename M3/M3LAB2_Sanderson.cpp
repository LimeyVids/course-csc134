// CSC 134
// 9/30/26
// M3LAB2
// Sanderson
// Convert number grades into letter grades

#include <iostream>
using namespace std;

void letter_A();
void letter_B();
void letter_C();
void letter_D();
void letter_F();




int main(){
// ask for input and figure out where the answer goes to
    double number_grade;

    cout << "Hello, to convert your number grade to a letter grade please input your number grade from 0-100" << endl;
    cout << "Number grade: ";
    cin >> number_grade;

    if (100 >= number_grade && number_grade >= 90){
        letter_A();
    }
    else if (89 >= number_grade && number_grade >= 80){
        letter_B();
    }
    else if (79 >= number_grade && number_grade >= 70){
        letter_C();
    }
    else if (69 >= number_grade && number_grade >= 60){
        letter_D();
    }
    else if (59 >= number_grade && number_grade >= 0){
        letter_F();
    }
    else{
        cout << "Uhhhh 100-0 please" << endl;
    }






}

// Print out answers
string answer = "Your letter grade is: ";

void letter_A() {
    cout << answer << "A!!! Good Job!!" << endl;

}

void letter_B() {
    cout << answer << "B, Pretty goooood" << endl;
}

void letter_C() {
    cout << answer << "C, hmmmm" << endl;
}

void letter_D() {
    cout << answer << "D, lock in" << endl;
}

void letter_F(){
    cout << answer << "F..." << endl;
}

