// write a c++ program to check whether a number is prime number or not.
#include<iostream>
using namespace std;

bool prime(int num){
    if (num <= 1)
    return false;

    for (int i = 2; i * i <= num; ++i){
        if(num % i == 0)
        return false;
    }
    return true;
}

int main()
{
    int n ;
    cout<<"Pleas enter nmber"<<endl;
    cin>>n;

if ( prime(n))
cout<< n <<" is a prime number."<<endl;

else
    cout<< n <<" is not a prime number. "<<endl;

    return 0;
}