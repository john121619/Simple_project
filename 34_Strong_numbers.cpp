// write a c++ program too check whether a number is Strong number or not.
#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; ++i){
        fact *= i;
    }
        return fact;
}

bool isStrongNumber(int num){
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
int number;

cout <<"Enter a number: ";
cin>> number;

if(isStrongNumber(number)) {
    cout <<number <<" is a strognnumber."<<endl;

}
else{
    cout<< number << " is not a strong number." <<endl;
}

return 0;
}