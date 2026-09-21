// CSC 134
// 9/21/26
// M3T1
// Sanderson
// Get area of two rectangles, find the largest one

#include <iostream>

using namespace std;

int main(){
    // declare variable for each rectangle
    double length1, width1, area1;
    double length2, width2, area2;

    // ask for the input
    cout << "first rectabgle:" << endl;
    cout << "\tlength ? ";
    cin >> length1;
    cout << "\twidth  ? ";
    cin >> width1;

    cout << "second rectabgle:" << endl;
    cout << "\tlength ? ";
    cin >> length2;
    cout << "\twidth  ? ";
    cin >> width2;
    // Calculation to find area

    area1 = length1 * width1;
    area2 = length2 * width2;
  
    // Output

    cout << "The first rectangles area is " << area1 << endl;
    cout << "The second rectangles area is " << area2 << endl;

    // Tell the user which one is larger
    if (area1 > area2) {
        cout << "Rectangle 1 is larger." << endl;
    }
    else if (area2 > area1) {
        cout << "Rectangle 2 is larger." << endl;
    }
    else {
        cout << "They are the same size." << endl;
    }

 return 0;
 }
