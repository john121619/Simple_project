// write a c++ program to print all perfect numbers between 1 to n.
#include<iostream>
using namespace std;

bool isPerfect( int num){
int sum = 0 ;
 
for( int i = 1 ; i <= num/2; ++i){
    if( num % i == 0){
        sum += i;
    }
}

return sum == num;
}

int main() {
    int n;
    cout<< "Enter a number : ";
    cin>>n;

    if(n < 1) {
        cout << " Please enter a positive number greater than 0." << endl;
        return 1;

    }
    cout<< "Perfect numbers between 1 and" << n << " are: " <<endl;

    for (int i = 1; i <= n; ++i){
        if (isPerfect(i)) {
            cout << i << "  ";
        }
    }
    cout<<endl;
    return 0;
}