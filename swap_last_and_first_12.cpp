//writ a c++ program swap first the last digit of number.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int number;
   cout<<"Enter a number: ";
   cin>> number;

   bool isNegative = false;
   if (number < 0) {
       isNegative = true;
       number = -number;
   }

   int num = number;
   int lastDigit = num % 10;


   int digits = 0;
   int firstDigit = num;
   while (num >= 10) {
       num /= 10;
       digits++;
   }
   firstDigit = num;

   if (digits == 0) {
    cout << "Swapped number: " << (isNegative ? -number : number) << endl;
    return 0;
}
   int middlePart = (number % static_cast<int>(pow(10, digits)))/10;
   int newNumber = lastDigit * static_cast<int>(pow(10, digits)) + middlePart * 10 +
   firstDigit;

   if (isNegative){
    newNumber = -newNumber;
   }
   cout<<"Number after swapping first and last digit: " <<newNumber<<endl;
   return 0;
} 