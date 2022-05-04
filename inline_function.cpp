// inline_function.cpp (lab-2)
// Inline Function: Program to make use of inline function;

#include<iostream>
using namespace std;

 inline int add(int x, int y)   // Implementing inline function;
 {
     return(x+y);               // Returning sum;
 }
 int main()                       // Main code;
 { 
     int a,b;
     cout<<"Please enter any two numbers to addd: "<<endl;
     cin>>a>>b;
     cout<<"The sum is: "<<add(a,b)<<" , using inline function";
     return 0;
 }
