/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Michael Doyon
 */


#include "std_lib_facilities.h"

using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "The value " << num << " is an even number.";
    }

    else
    {
        cout << "The value " << num << " is an odd number.";
    }

    return 0;
}