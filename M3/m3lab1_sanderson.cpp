// if statement example3
// standard header


#include <iostream>
using namespace std;

////
// here we use a new trick that isn't covered until "Functions",
// but the basics aren't too hard to pick up.
// So far main() has been our only function, and all code was
// located there.
//
// In this example, we add multiple functions that are used
// by main(). If this isn't clear to you, don't worry -- we 
// will spend more time on them in detail later.

// declare that we are going to have more functions than main()
// (I will say "function" and "method" interchangeably)
// we should give them "verb" names, like we give our 
// variables "noun" names. 

void chooserace();
void choosenorace();
void choosecops();

// the lines above tell the program that these functions will 
// exist, but we have to define them later on in the file.
////

// beginning of the main() method
int main() {
  
  // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  int choice; 

  // ask the question
  cout << "You're in your brand new mk5 Supra and you see a civic that seems to want to race, what do you do?" << endl;
  cout << "1. Race the civic" << endl;
  cout << "2. Dont race the civic" << endl;
  cout << "3. Write down his plate and report him to the cops." << endl;
  cout << "? ";
  cin >> choice;
// can also say (choice == 1)
  if (1 == choice) {
    chooserace();
  }
  else if (2 == choice) {
    choosenorace();
  }
  else if (3 == choice) {
    choosecops();
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
    // program ends, or we could loop around again
  }

  cout << "Thank you for playing!" << endl;
  return 0; // tells the computer that we finished without errors

} // end of the main() method

////
// After main(), we define all our other functions.
// (Declaring means "This function exists", we did that above.)
// (Defining means "This is what the function does".)
////

void chooserace() {
  // this function is called in main if the user chooses 1.
  cout << "You pull up to the light and get ready to race. But then. You see the passenger pull out a laptop. You got smoked." << endl;

  }

void choosenorace() {
  // this function is called in main if the user chooses 1.
  cout << "You chose not to race the civic for some reason. Boring." << endl;

}

void choosecops() {
    cout << "You called the cops on him and you saw him pulled over up the road. Why would you do that?" << endl;
}


// If we had a Door #3, or 4, we would add another else if to our
// main(), and then declare and define chooseDoor3() and so on.
