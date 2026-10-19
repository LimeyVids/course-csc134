// CSC 134
// M3HW - chat bot
// 10/16/26
// SandersonL

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
 void question1();
 void question2();
 void question3();
 void question4();

int main(){
    int  choice;
    // ask what question they are using
    cout << "Welcome to M3HW!!" << endl << "Please type the number from the following " << "(only did 1 and 2)" << endl;
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
        question4();
    }
    else {
        cout << "Sorry your input was in the wrong format please try again.";
    }
return 0;



}


void question1(){
    // get input
    string answer1;
    cout << "Hello! I am a chat bot!" << endl;
    cout << "Do you like computers?" << endl << "Yes or no?" << endl;
    cin  >> answer1;
// output
    if (answer1 == "yes"){
        cout << "YEYYYY me too!!" << endl;
    }
    else if (answer1 == "no"){
        cout << "Wow you're really missing out you know that?";
    }
    else {
        cout << "Uhhhh idk what that means please try again" << endl;
    }
}

void question2(){
    // declare variables
    string meal_name = "Chicken Sandwich";          // ex: chicken sadwhich
    double meal_price;                       // $
    double tax_rate = 0.08;                         // %
    int setting;
    double tip_amount;
// input
 cout << "Input meal price: $";
 cin >> meal_price;
 cout << "Is it 1.Dine in, or 2.Carryout? Input: ";
 cin >> setting;
// processing
    if (setting == 1){
        tip_amount = .15;
    }
    else if (setting ==2){
        tip_amount = 0;
    }
    else{
        cout << "Error, unknown input detected.";
    }
    double tip = meal_price * tip_amount;
    double tax_amount = meal_price * tax_rate;      // $
    double total = tax_amount + meal_price + tip;         // $, meal + tax

// output

    string line = "========================================";
    
    cout << setprecision(2) << fixed; // makes numbers rouned
    cout << line << endl;
    cout << setw(25) << meal_name << setw(10) << " $" << meal_price << endl;
    cout << setw(25) << "15% Tip:" << setw(10) << " $" << tip << endl;
    cout << setw(25) << "tax:" << setw(10) << " $" << tax_amount << endl;
    cout << line << endl;
    cout << setw(25) << "Total:" << setw(10) << "$" << total << endl;
    cout << setw(25) << "Thank you come again!" << endl << endl;
    
    
    
    
    



}

void question3(){
    cout << "This is question 3." << endl;
}

void question4(){
    cout << "This is question 4." << endl;
}





