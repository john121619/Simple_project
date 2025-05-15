// write a c++ program to print all strong numbers between 1 to n.
#include<iostream>
using namespace std;

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; ++i) {
        fact *= i;
    }
    return fact;
}

bool isStrongNumber(int num) {
    int originalNum = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);  
        num /= 10;
    }

    return (sum == originalNum);
}

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    cout<< "strong number between 1 and " <<n <<"  are :\n";

    for(int i = 1; i <= n; ++i)
    {
    if (isStrongNumber(i)){
        cout<< i <<"   ";
    }
    }
    return 0;
}