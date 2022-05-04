//default_const.cpp (lab-7(a));
//Default constructor: Program to demonstrate the concept of default constructor;

#include <iostream>
using namespace std;

class Construct                   //Creating a class;
{
    public:

    Construct()                   //Default Constructor;
    {
        cout<<"Defauld constructor being called:"<<endl;
    }

};
 
int main()                         //Main code;
{
    Construct A;                   //Creating class object which initiliazes default constructor;
}
