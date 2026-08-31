// CSC 134
// M1HW1
// Liam Sanderson
// 8/31/26

#include <iostream>

using namespace std; // makes it so you dont have to type std::cout everytime

int main(){

    // practice using variables in normal text

    string movie = "Back to The Future"; //movie name
    int year = 1985;
    double gross = 398.2; // gross amount in millions USD

    // the text
    cout << "The movie " << movie << " came out in " << year << "." << endl;

    cout << "It grossed $" << gross << " million." << endl;
    
    // now some quotes
    cout << endl << "One of the many great quotes from the movie include" << endl;
    cout << endl << " \"1.21 Gigawatts!?\"" << endl;
    cout << endl << "Another quote from Doc, \"Great Scott!\"" << endl;



    return 0; // no errors
}