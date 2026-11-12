

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
SandersonL
11/06/26

This template is a starting point for your own program.
We use void functions to tell a simple story.
The player makes choices, and each choice calls a function.
*/
#include <iostream>
#include <limits>
using namespace std;
// FUNCTION PROTOTYPES
// Every function you write must be listed here, above main().
// The compiler reads the file from top to bottom. A prototype
// tells it: "this function exists, and its full code is below."
void main_menu();
void choice_ignore();
void choice_no_race();
void choice_race();
void choice_race_for_pinks();
void choice_race_for_fun();

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // Start the story.
  main_menu();
  // When main_menu() returns, the story is over.
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

// FUNCTION DEFINITIONS
// The full code for each function goes here, below main().

void main_menu() {
  // A menu that accepts 1, 2, 3, or 4 (quit).
  cout << "Main Menu" << endl;
  cout << "You're at a red light waiting for it to change. Then a car pulls up next to you." << endl;
  cout << "Do you:" << endl;
  cout << "1. Say no to racing" << endl;
  cout << "2. Signal to race" << endl;
  cout << "3. Ignore it" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice = 0;
  cin >> choice;
  if (cin.fail()) {
    // The player typed something that is not a number.
    cin.clear(); // reset cin so it can read again
    choice = 0;  // treat it as an invalid choice
  }
  // Throw away the rest of the line the player typed.
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  if (1 == choice) {
    choice_no_race();
  } else if (2 == choice) {
    choice_race();
  } else if (3 == choice) {
    choice_ignore();
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    main_menu(); // try again
  }
}

void choice_race() {
  cout << "You accept the offer to race." << endl;
  cout << "Do you:" << endl;
  cout << "1. Race for pinks?" << endl;
  cout << "2. Race for fun?" << endl;
  int choice = 0;
  cout << "Choose: ";
  cin >> choice;
  if (cin.fail()) {
    // The player typed something that is not a number.
    cin.clear(); // reset cin so it can read again
    choice = 0;  // treat it as an invalid choice
  }
  // Throw away the rest of the line the player typed.
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  if (1 == choice) {
    choice_race_for_pinks();
  } else if (2 == choice) {
    choice_race_for_fun();
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    choice_race(); // try again
  }
}

void choice_race_for_pinks() {
  cout << "You choose to race for pinks. He revs his civic and the light shines inside. You see someone in the passenger seat with a laptop..." << endl << "You lost" << endl;
}

void choice_race_for_fun() {
  cout << "You choose to race for fun. You lose to the civic with a laptop in style" << endl;
}

void choice_no_race() {
  cout << "You say no to racing. Do you:" << endl;
  cout << "1. Floor it" << endl;
  cout << "2. Leave normally." << endl;
  int choice = 0;
  cout << "Choose: ";
  cin >> choice;
  if (cin.fail()) {
    // The player typed something that is not a number.
    cin.clear(); // reset cin so it can read again
    choice = 0;  // treat it as an invalid choice
  }
  // Throw away the rest of the line the player typed.
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  if (1 == choice) {
    cout << "You floor it and it turns out they were a cop." << endl;
  } else if (2 == choice) {
    cout << "You leave normally and drive off. They follow you home." << endl;
  }else {
    cout << "That's not a valid choice, please try again." << endl;
    choice_no_race(); // try again
  }
}

void choice_ignore() {
  cout << "You ignore the car and drive off." << endl;
}