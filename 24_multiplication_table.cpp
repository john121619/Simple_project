// write  a c++ program to print multiplication table of any number.
#include<iostream>
using namespace std;
 
int main()
{
    int n, mult = 0;
    cout<<"pleas Enter a number"<<endl;
    cin>>n;

    cout<<"The multiplication table of "<<n<<" is: "<<endl;
    for(int i = 0; i <= 10; i++){
        	mult = i * n;
            cout<<n <<" X "<<i<<" = "<<mult<<endl;
    }
    return 0;
    
}