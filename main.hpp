#include <iostream>
using namespace std;

void getTwoValues(int&, int&);
int getNextPrime(int);
//********************
// Declare Function Prototypes
//********************

bool isPrime;
int nextNum;

void getTwoValues(int &begin, int &end) {
    cout << "Please enter beginning and end numbers: ";
    cin >> begin >> end;
    if (begin >= end) {
        getTwoValues(begin, end);
    }
}
int getNextPrime(int begin) {
    nextNum = begin + 1;
    isPrime = false;
      while (!isPrime) {
        isPrime = true;
        for (int i = 2; i * i <= nextNum; i++) {
            if (nextNum % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (!isPrime) {
            nextNum++;
        }
      }
        return nextNum;
}

// int getPrevPrime(int end) {
//     isPrime = false;
//     while (!isPrime) {
//         for int i = 2; i * i <= 
//     }
// }
//1 3
// ******************************
// Implement all your functions here
// ******************************
