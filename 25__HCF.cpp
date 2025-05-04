// write c++ program to find HCF (GCF)of teo number.

#include<iostream>
using namespace std;
int findGCF(int a, int b)
{
    
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
int num1 , num2;

cout<<"enter 2 numbers" <<endl;
cin>>num1 >>num2;

 int GCF = findGCF(num1, num2);
cout <<"GCF of :"<< num1 <<" and "<< num2 <<" is : "<< GCF;
return 0;

}
