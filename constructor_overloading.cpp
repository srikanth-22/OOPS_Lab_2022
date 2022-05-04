//constructor_overloading.cpp (lab-7(d));
//Conctructor Overloading: Program to demonstrate the concept of constructor overloading;

#include<iostream>
using namespace std;

class Example
{
     private:
        int x,y;
     public:
        Example ()                    //constructor 1 with no arguments;
       {
            x = y = 0;
        }
        Example(int a)                //constructor 2 with one argument;
       {
             x = y = a;
        }
        Example(int a,int b)          //constructor 3 with two argument;
        {
              x = a; 
              y = b;
        }
        void display()
        {
            cout<< "x = "<< x <<" and "<<"y = "<< y << endl;
        }
};

int main()                                  //Main code;
{
     Example cc1;                           // constructor 1
     Example cc2(10);                       // constructor 2
     Example cc3(10,20);                    // constructor 3
     cc1.display();                         //calling constructor 1
     cc2.display();                         //calling constructor 2
     cc3.display();                         //calling constructor 3
     return 0;
 }