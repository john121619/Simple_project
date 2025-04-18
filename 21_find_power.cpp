//write a c++ program to find power of a number using for loop.
#include<iostream>
using namespace std;
int main()
{
    double base;
    int exponent;
    double result = 1;

    cout<<"Enter the base: ";
    cin>> base;
    cout<<"Enter the exponent (non-negative interger): ";
    cin>>exponent;

    for (int i = 1; i <= exponent; ++i) {
        result *= base;
    }
    cout<<base<<"raised to the power of " << exponent <<" is " << result << endl;
    return 0;
}