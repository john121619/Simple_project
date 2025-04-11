//write a c++ program to find the sum of first and last digit of a number. 
#include<iostream>
using namespace std;
int main()
{
    int n, originalNumber;
    int firstDigit, lastDigit;
    cout<<"Enter a number: ";
    cin>> n;
    originalNumber = abs(n);
    lastDigit = originalNumber % 10;
     
    while (originalNumber >=10){
        originalNumber /=10;
    }
    firstDigit = originalNumber;
    int sum = firstDigit + lastDigit;
    cout<<"sum of first and last digit: "<<sum <<endl;
    return 0;

}
