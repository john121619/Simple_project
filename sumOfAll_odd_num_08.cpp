//write a c++  program to find sum of all odd numbers between 1 to n.
#include<iostream>
using namespace std;
int main()
{
int n, sum = 0;
cout<<"Enter a number"<<endl;
cin>>n;
for(int i = 0; i<=n; i++)
if (i%2 !=0)
sum+=i;
cout<<"The sum of all odd numbers 1 to "<<n<<" is: "<<sum<<endl;
return 0;
}