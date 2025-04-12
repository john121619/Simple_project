//write a c++ program check whether a number is palindrome or not.
#include<iostream>
using namespace std;
int main()
{
int n, revers = 0;
cout<<"pleas enter a number"<<endl;
cin>>n;
int number = n;
int temp = abs(n);
while(temp>0){
    int digit = temp % 10;
    revers = revers * 10 + digit;
    temp/=10;
}
if(abs(number) ==revers)
cout<<number<<" is a palindrome. "<<endl;
else
cout<<number<<" is not a palindrome." <<endl;
return 0;
}