// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "../Project1/math1.h"
#include <iostream>

using namespace std;

int main()
{
    
    int x;
    int y;
    int chose;
    cout << "chose a option: ";
    cin >> chose;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    
    switch (chose) {
    case 1:
        cout << calc(x, y);
        break;
    case 2:
        cout << dev(x, y);
        break;
    case 3:
        cout << mult(x, y);
        break;
    }
    
}