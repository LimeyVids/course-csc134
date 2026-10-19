// CSC 134
// M4T1 - While
// sandersonl
// 18/10/26


#include <iostream>
using namespace std;
  
int main(){

    // Part 1, just say "hi" five times
    int number = 1;
    while (number <= 5){
        cout << "Hello\n";
        number++;
    }
    cout << "That's all!\n";







    //part 2
    const int MIN_NUMBER = 1,   // starting # to squrare
              MAX_NUMBER = 10; //max number to square
    int num = MIN_NUMBER; // counter

    cout << "Number Number Squared\n";
    cout << "============================\n";
    while (num <= MAX_NUMBER){
        cout << num << "\t\t" << (num * num) << endl;
        num++; // increment the counter
    }


    return 0; // done
}