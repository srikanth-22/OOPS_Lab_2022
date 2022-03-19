// function_overloading.cpp (lab-3);
// Function Overloading: Program to show the effect of default arguments using function overloadong;

#include <iostream>
using namespace std;

class Add
{
     private:
     int x,y;

     public:
     int addnum(int x,int y)
     {
        return (x+y); 
     }
     int addnum(int x)
     {
         y=2;
	    return (x+y);
     }
 };

int main()
{
    int sum1,sum2;
    Add Q;
    sum1= Q.addnum(3,4);
    cout<<"The result of 'addnum' function with 2 variables as input is: "<<sum1<<endl;
    sum2= Q.addnum(2);
    cout<<"The result of  'addnum' function with 3 variables as input is: "<<sum2<<endl;
    return 0;
}