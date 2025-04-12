// write a c++ program a to enter a number and print it in words.
#include<iostream>
#include<stack>
#include<string>
using namespace std;

string digitToWord(int digit){
    switch (digit) {
        case 0: return "Zero";
        case 1: return "One";
        case 2: return "Two";
        case 3: return "Three";
        case 4: return "Four";
        case 5: return "Five";
        case 6: return "Six";
        case 7: return "Seven";
        case 8: return "Eight";
        case 9: return "Nine";
        default : return " ";

    }
}

int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;

if (n < 0){
    cout<<"Minus";
    n = -n;
}
    if (n == 0){
        cout<<"Zero"<<endl;
        return 0;
    }

    stack<int> digits;

   
        while (n > 0){
            digits.push(n % 10);
            n/=10;

        }

        while(!digits.empty()) {
            cout<< digitToWord(digits.top()) <<"  ";
            digits.pop();
        }
        cout <<endl;
        return 0;
    }

