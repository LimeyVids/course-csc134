// CSC 34
// M6T1 - loop and array
// Sanderson
// 11/9/26
// First try no array
// To get average convert double first
#include <iostream>
using namespace std;

//Fuctions
void method1();
void method2();
void method3();

int main(){
    // count # of cars per day different ways
    method1();
    method2();
    method3(); // range based loop

    return 0;
}

void method1(){
    string item = "Cars";
    cout << "Count how many " << item << " were seen each day." << endl;
    //count for 5 days
    const int size = 5;
    int counts [size];
    int total = 0;
    double average = 0;
    // get the input and add total
    for (int i=0; i < size; i++){
        cout << "Day " << i+1 << ": ";
        cin >> counts[i];
        total += counts[i];
    }
    cout << "Total " << item << " seen: " << total << endl;
    average = (double) total / size; 
    cout << "Average per day: " << average << endl;
    cout << item << " seen per day:" << endl;
    for (int i=0; i < size; i++){
        cout << "Day " << i+1 << ": " << counts[i] << endl;
    }
}

void method2(){
    // no array
string item = "Cars";
    cout << "Count how many " << item << " were seen each day." << endl;
    //count for 5 days
    const int size = 5;
    int total = 0;
    int today;
    double average = 0;
    // get the input and add total
    for (int i=0; i < size; i++){
        cout << "Day " << i+1 << ": ";
        cin >> today;
        total += today;
    }
    cout << "Total " << item << " seen: " << total << endl;

    average =  total / size; 
    cout << "Average per day: " << average << endl;
}
   

void method3(){
    // range baesd for loop
    // cannout buffer overflow because we dont handle the index ourselves
    const int size = 5;
    int counts[size] = {0, 0, 0, 0, 0};
    cout << "Count cars per day" << endl;
    // this loop changes the array so needs reference and symbol
    for (int& count: counts){
        // "for count in counts"
        cout << "> ";
        cin >> count;
    }
// Not do total and average4
int total = 0;
double average = 0;
// NOTE: this loop onyl reads values so doesnt need &
for (int count: counts){
    total += count;

}
average = (double) total / size;
cout << "Total: " << total << endl << "Average: " << average << endl;
}