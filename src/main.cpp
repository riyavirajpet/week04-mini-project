/*
 * main.cpp
 * Temperature Conversion Program
 */

#include <iostream>
using namespace std;
int main()
{
    int choice;
    cout << "1: Celsius to Fahrenheit 2: Fahrenheit to Celsius" << endl;
    cout << "Choice: ";
    cin >> choice;
    int C;
    int F;

    switch (choice)
    {
    case 1:
        cout << "Enter temperature in Celsius: ";
        if (cin >> C)
        { // Check if input is valid
            F = (C * 9 / 5) + 32;
            cout << C << " C" << " converts to " << F << " F" << endl;
        }
        else
        {
            cout << "Invalid input" << endl;
            return 0;
        }
        break;
    case 2:
        cout << "Enter temperature in Fahrenheit: ";
        if (cin >> F)
        { // Check if input is valid
            C = (F - 32) * 5 / 9;
            cout << F << " F" << " converts to " << C << " C" << endl;
        }
        else
        {
            cout << "Invalid input" << endl;
            return 0;
        }
        break;
    default:
        cout << "Invalid Choice" << endl;
        return 0;
    }
}