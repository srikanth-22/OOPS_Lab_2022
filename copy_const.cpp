//copy_const.cpp (lab-7(c));
//Copy Constructor: Program to demonstrate the concept of copy constructor;

#include <iostream>
using namespace std;
 

class Rectangle                         // class name: Rectangle;
{
  private:
    double length;
    double breadth;
 
  public:

    Rectangle(double l, double b)       // parameterized constructor;
    {
      length = l;
      breadth = b;
    }
 
  // copy constructor with a Rectangle object as parameter copies data of the obj parameter;
    Rectangle(Rectangle &obj) 
    {
      length = obj.length;
      breadth = obj.breadth;
    }
 
 
    double calculateArea()             //function to calculate area;
    {
      return length * breadth;
    }
};
 
int main()                           //Main Code;
{

Rectangle obj1(10,6);            	 // create objects to call constructors;
Rectangle obj2 = obj1;               //copy the content using object;
 

  cout << "Area of Rectangle 1: " << obj1.calculateArea()<<endl; //print areas of rectangles;
  cout << "Area of Rectangle 2: " << obj2.calculateArea()<<endl; //print areas of rectangles;
 
  return 0;
}