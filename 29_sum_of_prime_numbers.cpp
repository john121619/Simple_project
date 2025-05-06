// write a c++ program to find sum of all prime numbers between 1 to n.
#include<iostream>
using namespace std;
int prime(int num){
    if(num <= 1)
    return false;
    for(int i = 2; i*i <= num; ++i){
        if(num % i == 0)
    return false;
    }
    return true;
}
int main()
{
    int n, sum = 0;
    cout<< "pleas enter number"<<endl;
    cin>>n;
    for(int i = 2; i <= n; ++i){
        if(prime(i)){
        sum += i;
        }
   
    }
    cout<<"The sum of all prime number between 1 upto : "<<n<<" is :"<< sum <<endl;
    return 0;
}