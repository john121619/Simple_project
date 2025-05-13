// write a c++ program to check whether a number is perfect number or not.
#include<iostream>
using namespace std;

bool isPerfect(int num){
    int sum = 0 ;

    for(int i = 1; i <= num / 2 ; ++i)
    {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main()
{
    int n;
    cout<<"Please enter number " <<endl;
    cin>>n;

    if(n <= 0){
        cout<<"please enter  a positive integer . "<<endl;
    }
else if (isPerfect(n)) {
    cout<<n<<" is  a perfect number." <<endl;

}else{
    cout << n << " is not a perfect number." <<endl;
}
 
return 0;
}