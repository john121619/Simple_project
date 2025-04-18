//write a c++ program print a multiplication table of any number.
#include<iostream>
using namespace std;
int main()
{
    int n, multipl = 0;
    cout<<"pleas Enter a number"<<endl;
    cin>>n;
    cout<<"The table of "<<n<<" is :"<<endl;
    for(int i = 1; i <= 10; ++i){
    multipl = i * n;
   
   cout<<i<<" * "<<n<<" = "<<multipl<<endl;
    }
   return 0;
}