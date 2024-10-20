// GeometryCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int choice;
    cout << "Geometry Calculator" << endl;
    cout << "     1. Calculate the Area of a Circle" << endl;
    cout << "     2. Calculate the Area of a Rectangle" << endl;
    cout << "     3. Calculate the Area of a Triangle" << endl;
    cout << "     4. Quit" << endl;
    cin >> choice;
    while (choice < 1 || choice > 4) 
    {
        cout << "That is not a valid choice." << endl;
        cout << "Please choose again:" << endl;
        cin >> choice;
    }
    if (choice == 1)
    {
        float radius;
        cout << "What is the radius for your circle?" << endl;
        cin >> radius;
        while (radius < 0)
        {
            cout << "Radius must be positive" << endl;
            cout << "Please reenter radius:" << endl;
            cin >> radius;
        }
        float areaOfCircle;
        areaOfCircle = 3.14159 * pow(radius, 2);
        cout << "The area of your circle is " << areaOfCircle;

    }
    if (choice == 2)
    {
        double length;
        double width;
        cout << "What is the length of your rectangle?" << endl;
        cin >> length;
        while (length < 0)
        {
            cout << "Length must be positive" << endl;;
            cout << "Please reenter the length:" << endl;
            cin >> length;
        }
        cout << "What is the width of your rectangle?" << endl;
        cin >> width;
        while (width < 0)
        {
            cout << "Width must be positive" << endl;;
            cout << "Please reenter the width:" << endl;
            cin >> width;
        }
        float areaOfRect;
        areaOfRect = length * width;
        cout << "The area of your rectangle is " << areaOfRect;

    }
    if (choice == 3)
    {
        double base;
        double height;
        cout << "What is the base of your triangle?" << endl;
        cin >> base;
        while (base < 0)
        {
            cout << "Base must be positive" << endl;;
            cout << "Please reenter the base:" << endl;
            cin >> base;
        }
        cout << "What is the height of your triangle?" << endl;
        cin >> height;
        while (height < 0)
        {
            cout << "Height must be positive" << endl;;
            cout << "Please reenter the height:" << endl;
            cin >> height;
        }
        float areaOfTriangle;
        areaOfTriangle = base * height * 0.5;
        cout << "The area of your triangle is " << areaOfTriangle;

    }
    if (choice == 4)
    {
        return 0;

    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
