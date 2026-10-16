// CSC 134
// M3HW - chat bot
// 10/16/26
// SandersonL

#include <iostream>
using namespace std;
 void question1();
 void question2();
 void question3();
 void quesrion4();

int main(){
    int  choice;
    // ask what question they are using
    cout << "Welcome to M3HW!!" << endl << "Please type the number from the following" << endl;
    cout << "1. Question 1" << endl << "2. Question 2" << endl << "3. Question 3" << endl << "4. Question 4" << endl << "Type here: ";
    cin >> choice;

    // find the input and then output

    if (choice == 1){
        question1();
    }
    else if (choice == 2){
        question2();
    }
    else if (choice == 3){
        question3();
    }
    else if (choice == 4){
        quesrion4();
    }
    else {
        cout << "Sorry your input was in the wrong format please try again.";
    }
return 0;



}








