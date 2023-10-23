#include <iostream>
using namespace std;

//****************************************************************************************************

int main ()
{
    double length,
           width,
           area;

    cout << "This program will calculate the area of the rectangle for you." 
         << endl << endl;
    
    cout << "Please enter the length of the rectangle: ";
    cin >> length;

    cout << "Please enter the width of the rectangle: ";
    cin >> width; 
    cout << endl;

    area = length * width;
    cout << "The area of the rectangle: " << area << endl;

    return 0;
}

//****************************************************************************************************

/*

This program will calculate the area of the rectangle for you.

Please enter the length of the rectangle: 10.5
Please enter the width of the rectangle: 2.25

The area of the rectangle: 23.625

*/