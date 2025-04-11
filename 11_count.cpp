//write a c++ program to count number of digits in a number.
#include<iostream>
using namespace std;
int main()
{
    int  n, count=0;
    cout<<"Enter a integer: ";
    cin>>n;
    n = abs(n);

    if (n == 0){
        count = 1;
    } else{
        while (n != 0){
        n /= 10;
    count++;
        }
    }
    cout<<"number of digits:" <<count <<endl;
    return 0;
}
