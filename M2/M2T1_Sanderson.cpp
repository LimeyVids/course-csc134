// CSC 134
// Sanderson
// M2T1
// 9/9/26
// We are going to modify M1Lab1 to include a cin function

#include <iostream>
using namespace std;

int main(){
    // Declare variables

    string product_name;
    int product_count;
    double product_price;
  
    // variables for customer purchase
   
    int purchase_count;
    double purchase_total;

    // Input
   
    cout << "Store Setup" << endl;
    cout << "Product Name: ";
    cin >> product_name;
    cout << "Item count: ";
    cin >> product_count;
    cout << "Price Each: $";
    cin >> product_price;

    // Get input, greet user and get order
   
    cout << "---------------------------------" << endl << endl;
    cout << "Welcome to " << product_name << " store!" << endl;
    cout << "Our: "<< product_name << "(s) are $" << product_price << " each." << endl;
    cout << "How many would you like to purchase today?" << endl;
    cin >> purchase_count;

    // Print output

    purchase_total = purchase_count * product_price;
    cout << "---------------------------------" << endl << endl;
    cout << "Today you purchased " << purchase_count << " " << product_name << "(s) for a total of $" << purchase_total << endl;
    cout << "Thank you for shopping with us!" << endl;

    return 0;
}
