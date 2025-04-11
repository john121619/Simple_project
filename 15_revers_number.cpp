// write a c++ program to enter a number and print its revers
#include<iostream>
using namespace std;
int main()
{
    int n, revers = 0;
    cout<<"plese enter a number"<<endl;
    cin>>n;
    int originalNumber = n;
    bool isNegative = n < 0;
    n = abs(n);

    while(n > 0) {
        int digit = n%10;
        revers = revers * 10 + digit;
        n/=10;
    }
    cout<<"The rivers of number is :"<<revers <<endl;
    return 0;

}