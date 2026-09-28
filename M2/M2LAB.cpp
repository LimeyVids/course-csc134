// CSC 134
// M2LAB
// SandersonL
// 9/28/26
// makeing a program to calculate volume, cost, charge, and profit made from the crate.

#include <iostream>
#include <iomanip>

 using namespace std;

 int main() {

// list vars

 double COST_PER_CUBIC_FOOT = 0.23;
 double CHARGE_PER_CUBIC_FOOT =0.5;
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
 cout << "The volume of the box you requested is " << volume << "cu ft" << endl;
cout << "The cost for the box is $" << cost << endl;
cout << "The amount you will be charged is $" << charge << endl;
cout << "The profit that will be made is $" << profit << endl;








return 0;

 }
