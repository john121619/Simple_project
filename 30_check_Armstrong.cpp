// write a c++ program to check whther a number is Armstrong number or not.
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int number, originalNumber, remainder, result = 0;
int digits = 0;

cout <<" Enter a number: "<<endl;
cin>> number;

originalNumber = number;

int temp = number;
while(temp != 0){
    temp /= 10;
    ++digits;
}

temp = number;
while (temp != 0){
    remainder = temp % 10;
    result += pow(remainder, digits);
    temp /=10;

}

if (result == originalNumber)
    cout<<originalNumber <<" is an Armstrong number." <<endl;
    else
    cout << originalNumber <<" is not an Armstrong number." <<endl;
    return 0;
}