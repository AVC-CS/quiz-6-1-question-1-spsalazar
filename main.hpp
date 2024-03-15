#include <iostream>
using namespace std;

void getTwoValues(int, int);
//********************
// Declare Function Prototypes
//********************

void getTwoValues(int begin, int end) {
    cout << "Please enter beginning and end numbers: ";
    cin >> begin >> end;
    if (begin >= end) {
        getTwoValues(begin, end);
    }
}

// ******************************
// Implement all your functions here
// ******************************
