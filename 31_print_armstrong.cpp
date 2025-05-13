// write a c++ program to print all armstrong number between 1 to n.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int number , originalNumber, remainder, result = 0;
    int digits = 0;

    cout<<" please enter a number"<<endl;
    cin>>number;

    originalNumber = number;

    int temp = 0;
    while(temp != 0){
        temp /= 10;
        ++digits;
    }

    temp = number;
    while(temp != 0) { 
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }
for(int i = 0; i <= number; i++){
    if(result == originalNumber)
        cout<<originalNumber <<endl;
}
return 0;
}
