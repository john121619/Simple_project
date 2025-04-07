//write a c++ program to find sum of all natural numbers betewwn 1 to n.
#include<iostream>
using namespace std;
int main()
{
int n, sum = 0;
cout<<"Enter a natural number"<<endl;
cin>>n;
if (n < 1){
cout<<"pleas inter a natural number!!!"<<endl;
return 1;
}
for(int i = 0; i <= n; i++)
sum+=i;
cout << "The sum of natural numbers from 1 to " << n << " is: " << sum << endl;
return 0;
}