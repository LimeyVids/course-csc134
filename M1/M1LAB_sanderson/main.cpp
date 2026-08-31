// CSC 134
// M1LAB - Apple sales
// Sanderson
// 8/26/26
//Calculate apple prices




#include <iostream>



using namespace std;

int main()
{
    //intro yourself
    string name = "Sanderson";
    string product = "dirt cup";

    cout << "Welcome to the " << name << " " << product << " farm." << endl;

    // Calculations
    int product_count = 100;
    double product_price = 0.25; // in USD

    cout << "We have " << product_count <<" " << product << "(s). They are $" << product_price << " each." << endl;

    double total_price = product_count * product_price;
    cout << "Total price for all " << product_count << " is: $" << total_price << endl;



    return 0;
}
