// write a c++ program print all prime numbers between 1 to n.
#include<iostream>
using namespace std;

int prime(int num)
{
if ( num <= 1)
    return false;
for(int i = 2; i * i <= num; ++i){
    if( num % i == 0)
    return false;
}
return true;
}

int main()
{
    int n;
    cout<<" Pleas enter a number"<<endl;
    cin>>n;
    cout<<" Prime number between 1 and "<< n <<  " are: "<<endl;
    for(int i = 2; i <= n; ++i)
    if ( prime(i)){
    
    cout <<i <<endl;
    }

    return 0;
    
}