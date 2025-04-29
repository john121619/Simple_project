// write a c++ program to calculate factorial of  a number.


#include<iostream>
using namespace std;
int main()

{
    int n, factorial = 1;
    cout<<"pleas Enter a numbe"<<endl;
    cin>>n;
    cout << "Factorials from 1 to " << n << ":" << endl;
    for (int i = 1; i <= n; ++i){
    factorial *= i;
    cout << i << "! = " << factorial << endl;
}
    return 0;
}
