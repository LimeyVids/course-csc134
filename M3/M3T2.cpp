// CSC 134
// M3T2
// sandersonl
// 10/11/26
// Start with dice rolls
// What dice are you using today?


#include <iostream>
// for random
#include <cmath>    
#include <ctime>
using namespace std;

int main() {
    const int SIDES = 6; // yours will differ!
    //int seed = 19;
    int seed = time(0);
    // seed the random number generator
    srand(seed);
    // rand() is a large number, so we take the remainder which is %
    int roll;
    // roll a few times
    roll = ( (rand() % SIDES)+1 );
    cout << roll << endl;

    roll = (rand() % SIDES);
    cout << roll << endl;

    roll = (rand() % SIDES);
    cout << roll << endl;
}