//write a c++ program to calculate sum of digits of a number
#include<iostream>
using namespace std;
int main()
{
    int n  , sum = 0;
    // int Number;
    cout<<"plesa Enter a number"<<endl;
    cin>>n;
   n = abs(n);
    for (int i = 0; i <= n; i++ )   {
    sum += n%10;
    n /= 10;
    }
cout<<"The sum of all digit is : "<<sum<<endl;
return 0;

}