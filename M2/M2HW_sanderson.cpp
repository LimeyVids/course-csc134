/*
CSC 134
M2HW1 - Homework (4 questions max)
sandersonl
9/28/26
HOW TO USE:
- Fill in the functions for any question you answer
- uncomment those functions in main, so they run.
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <random>
using namespace std;

// COVERED in module 5, here's the basics
// List extra functions above main
// Write the full version below main
void question1();
void question2();
void question3();
void question4();



int main() {
    // Run only the questions you finish by removing the // 
    //question1();
    //question2();
    //question3();
    //question4();
    // variables
   int question;
    
   // request input to go to the right question.
    cout << "Hello which question would you like to use?" << endl << "Please type 1, 2, or 3." << endl << "Answer here: ";
    cin >> question;
    cin.ignore(1000, '\n');
    if (question == 1){
        question1();
    }
    else if (question == 2){
        question2();
    }
    else if (question == 3){
        question3();
    }
    else if (question == 4){
        question4();
    }


}


void question1() {
    // variables
    string username;
    double starting_balance;
    double withdraw_amount;
    double deposit_amount;
    double final_amount;
    //Get input
    cout << "Hello! Welcome to Big Bank." << endl << "Please enter your name to access your account." << endl;
    getline(cin, username);
    cout << "Welcome back " << username << "!" << endl;
    cout << "What is the starting balance on your account?" << endl << "$ ";
    cin >> starting_balance;
    cout << "What is the amount you would like to deposit?" << endl << "$ ";
    cin >> deposit_amount;
    cout << "What is the amount you would like to withdraw" << endl << "$ ";
    cin >> withdraw_amount;
    // say output
    
    final_amount = (starting_balance + deposit_amount - withdraw_amount);
   cout << fixed << setprecision(2) << final_amount; 
   cout << username << ", your account number is 8726387" << endl;
    cout << "Your final balance is: $" << final_amount << endl;

}

void question2() {
    
// list vars

 double COST_PER_CUBIC_FOOT = 0.3;
 double CHARGE_PER_CUBIC_FOOT =0.52;
 double length;
 double width;
 double height;
 double volume;
 double cost;
 double charge;
 double profit;

 // input from ustomer
 cout << "Hello, please enter the dimentions of the box." << endl;
 cout << "Length: ";
 cin >> length;
 cout << "Width: ";
 cin >> width;
 cout << "Height: ";
 cin >> height;

 // Calculate
 volume = length * width * height;
 cost = volume * COST_PER_CUBIC_FOOT;
 charge = CHARGE_PER_CUBIC_FOOT * volume;
 profit = charge - cost;

 // Display results
cout << setprecision(2) << fixed;
 cout << "The volume of the box you requested is " << volume << " cu/ft" << endl;
cout << "The cost for the box is $" << cost << endl;
cout << "The amount you will be charged is $" << charge << endl;
cout << "The profit that will be made is $" << profit << endl;






}

void question3() {
    cout << "Question 3 goes here" << endl;
}

void question4() {
    cout << "Question 4 goes here" << endl;
}