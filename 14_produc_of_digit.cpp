// write a c++ program to calculate produc of digits of a number
#include<iostream>
using namespace std ;
int main()
{
    int n , pro = 1;
    cout<<"pleas Enter a number"<<endl;
    cin>>n;
    n = abs(n);
    if(n == 0){
        pro = 0;
        cout<<"The product of digit is 0"<<endl;
    }
    else
    for (int i = 0; i <= n; i++){
    pro *= n % 10;
     n /= 10;
    }
    cout<<"The product of digits is : "<<pro<<endl;
    return 0;
}