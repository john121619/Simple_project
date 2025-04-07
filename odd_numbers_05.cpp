//write a c++ program to print all odd number.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any natural numbers"<<endl;
    cin>>n;
    for(int i =1; i<= n; i++){
        if(i%2 != 0)
        cout<<i<<"  ";
   
    }

    return 0;
}
