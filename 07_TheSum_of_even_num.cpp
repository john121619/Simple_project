//write a c++ program to find sum  of all even numbers between 1 to n.
#include<iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout<<"enter a number"<<endl;
    cin>>n;
    if(n<1){
        cout<<"please enter a natural num"<<endl;
        return 1;
    }
    for(int i = 0; i<=n; i++)
    if (i%2 == 0)
    sum += i;
    cout<<"The sum of even numbers 1 to "<<n<<" is: " <<sum<<endl;
    return 0;
}
