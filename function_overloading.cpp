// function_overloading.cpp (lab-4);
// Function Overloading: Program to show the effect of default arguments using function overloadong;

#include <iostream>
using namespace std;

class Add                               // Creating a class "Add";
{
     private:
     int x,y;

     public:
     int sqrnum(int x,int y)           // Function to add two variables;
     {
        return (x*y); 
     }
     int sqrnum(int y)               
     {
         y=2;                          // Declaring a default argument;
	    return (y*y);
     }
 };

int main()
{
    int sqr1,sqr2;
    Add Q;
    sqr1= Q.sqrnum(3,3);               // Calling function;
    cout<<"The result of 'addnum' function with 2 variables as input is: "<<sqr1<<endl;
    sqr2= Q.sqrnum(2);                 // Calling function with default argument;
    cout<<"The result of  'addnum' function with default argument as input is: "<<sqr2<<endl;
    return 0;
}