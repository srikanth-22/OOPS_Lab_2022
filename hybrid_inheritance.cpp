//hybrid_inheritance.cpp (lab-15);
//Hybrid Inheritance: program to show hybrid inheritence;
#include <iostream>
using namespace std;

class A                                            //Base Class 1;
{
   public:
   int a = 15;
   A()
   {
      cout <<"Constructor of class A"<< endl;
   }
};
class B : public A                                  //Derived class from class A;
{
   public:
   int b = 10;
   B()
   {
      cout <<"Constructor of class B"<< endl;
   }
};
class C                                              //base class 2;
{
   public:
   int c = 30;
   C()
   {
      cout<<"Constructor of class C"<< endl;
   }
};

class D: public B, public C
{
    public:
    int d=30;
    D()
    {
        cout<<"Constructor of class D"<<endl;
    }
};

int main()                                  //Main code;
{
   D obj;                                   // creating object;
   cout<<"a = "<< obj.a <<endl;
   cout<<"b = "<< obj.b <<endl;
   cout<<"c = "<< obj.c <<endl;
   cout<<"d= "<<obj.d<<endl;
   return 0;
}