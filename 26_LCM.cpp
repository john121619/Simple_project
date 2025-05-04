// write a c++ program to find LCM of two number.

#include<iostream>
using namespace std;
int findGcf(int a, int b)
{
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    
    }
return a;

}

int findLcm(int a, int b)
{
    int hcf = findGcf(a,b);
    return(a*b)/hcf;
}


int main()
{
    int num1, num2;
    cout<< "Pleas enter 2 numbers"<<endl;
    cin>>num1 >>num2;

    
    int lcm = findLcm(num1 , num2); 

cout<<"The lcm of "<< num1 <<" and "<< num2 <<" is : "<< lcm<<endl;

return 0;
    
}