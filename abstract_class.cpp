//abstract_class.cpp (lab-17);
//Abstract Class: program to create abstract class to calculate no_of_sides in the given geometrical group;

#include <iostream>
using namespace std;

class Shape  //Base Class
{
public:
    int n;
    int no_of_sides()                   //Function to return the number of slides;
    {
        return n;
    }
};

class Trapezoid : public Shape          //Derived class1;
{
public:

    Trapezoid(int n1)                   //Parameteriized constructor;
    {
        n = n1;
    }
};
class Triangle : public Shape           //Derived class2;
{
public:
    Triangle(int n1)                    //Parameteriized constructor;
    {
        n = n1;
    }
};
class Hexagon : public Shape                 //Derived class3;
{
public:                                      
    Hexagon(int n)                          //Parameteriized constructor;            
    {
        this->n = n;
    }
};
int main()                                   //main code;
{
    Trapezoid T(4);                          //creating object of derived class1;

    Triangle T1(3);                          //creating object of derived class2;

    Hexagon H(6);                            //creating object of derived class3;

    //Displaying the result for all derived class;
    cout << "No of sides in Trapezoid is : " << T.no_of_sides() << endl;
    cout << "No of sides in Triangle is : " << T1.no_of_sides() << endl;
    cout << "No of sides in Hexagon is : " << H.no_of_sides() << endl;
    return 0;
}