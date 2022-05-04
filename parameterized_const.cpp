//parameterized_const.cpp (lab-7(b));
//Parameterized Constructor: Program to demonstrate the concept of parameterized constructor;

#include<iostream>
using namespace std;
class Shape
{
   private:
     int length,breadth,x;
   public:
     Shape (int a,int b)           //parameterized constructor to initialize l and b;
     {
         length = a;
         breadth = b;
      }
      int area( )                  //function to find area;
      {
         x = length * breadth;
         return x;
      }
      void display( )              //function to display the area;
      {
          cout << "Area = " << x << endl;
      }
};

int main()                       //Main code;
{
    Shape c(2,4);                //initializing the data members of object 'c' implicitly;
    c.area();
    c.display();
    Shape c1= Shape(4,4);        // initializing the data members of object 'c' explicitly;
    c1.area();
    c1.display();
    return 0;
 }