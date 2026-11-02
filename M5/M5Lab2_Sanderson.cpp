// M5LAB2
// Header goes here

#include <iostream>
using namespace std;


double getLength(){
    cout << "Enter Length: ";
    double length;
    cin >> length;
    return length;
}
double getWidth(){
    cout << "Enter Width: ";
    double width;
    cin >> width;
    return width;
}
double getArea(double length, double width){
    return length * width;
}
double displayData(double length, double width, double area){
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << area << endl;
    return 0;
}

int main(){
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors CHECK
	
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************

