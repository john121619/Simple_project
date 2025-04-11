//Write a C++ program to print all natural numbers in reverse (from n to 1). - using while loop.
#include<iostream>
using namespace std;
int main()
{
    int n, i=1;
    cout<<"Enter any Natural number"<<endl;
    cin>>n;
    while(i <= n){
        cout<<n<<"  ";
        n--;
    }
    cout<<endl;
    return 0;
}
