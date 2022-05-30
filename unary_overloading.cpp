// unary_overloading.cpp (lab-11);
// Unary Operator Overloading: Program to overload unary operator;

#include <iostream>
using namespace std;

class Unary                  // creating a class;
 {
   public:
     int num1;
     int num2;

     Unary()                 // initializing;
     {
       num1 = 0;
       num2 = 2;
     };
     void operator ++()       // count increment;
     { 
         ++num1;
     } 
     void operator --()       // count decrement;
     { 
         --num2;
     }
 };
int main()                    // Main code;
 {
   Unary x, y;                // creating objects;

   //before increment/decrement
   cout << "x =" << x.num1<<endl;
   cout <<"y =" << y.num2<<endl;

   ++x;
   --y;

   //after increment/decrement
   cout<<"After increment/decrement"<<endl;
   cout<<"x ="<<x.num1<<endl;
   cout<<"y ="<<y.num2<<endl;
 return 0;
}