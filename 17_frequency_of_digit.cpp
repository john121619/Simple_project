//write a c++ program find frequency of each digit in a givern integer.
#include<iostream>
using namespace std;
int main()
{
    int n;
    int freq[10] = {0};
    cout<<"enter a number"<<endl;
    cin>>n;

    int temp = abs(n);
    if(temp == 0){
    freq[0] = 1;
    }else{
        while(temp != 0){
            int digit = temp % 10;
            freq[digit]++;
            temp /= 10;
        }
    }
    cout<<"digit frequencies in " << n << ": \n";
    for(int i = 0; i < 10; i++) {
        if(freq[i] > 0) {
            cout<<" Digit " << i << " appears " << freq[i] << " time(s)"<<endl;
        }
    
    }
    return 0;
}