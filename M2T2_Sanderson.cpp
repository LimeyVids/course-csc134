// CSC 134
// 9/14/26
// Recipt maker



#include <iostream>
// iomanip lets you use setw() and setprecision() and fixed
#include <iomanip>
using namespace std;

int main(){

// declare variables
    string meal_name = "Chicken Sandwich";          // ex: chicken sadwhich
    double meal_price = 5.99;                       // $
    double tax_rate = 0.08;                         // %
    double tax_amount = meal_price * tax_rate;      // $
    double total = tax_amount + meal_price;         // $, meal + tax
// input

// processing
    
// output

    string line = "======================================";
    
    cout << setprecision(2) << fixed; // makes numbers rouned
    cout << line << endl;
    cout << setw(20) << meal_name << setw(10) << " $" << meal_price << endl;
    cout << setw(20) << "tax:" << setw(10) << " $" << tax_amount << endl;
    cout << line << endl;
    cout << setw(20) << "Total:" << setw(10) << "$" << total << endl;
    cout << "Thank you come again!" << endl << endl;
    
    
    
    
    
    return 0;

}