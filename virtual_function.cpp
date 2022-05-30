//vitrual_function.cpp (lab-16);
//Virtual Function: program to show runtime ploymorphism using virtual function;

#include <iostream>
using namespace std;

class shape                            //Declaration of Base class;
{
public:
	virtual void calculate()            //virtual function;
	{
		cout << "Area: ";
	}
};

class Rectangle : public shape          // Declaration of derived class;
{
    public:
	int width, length, area;

	void calculate()                     //overrideen function from base class;
	{
		cout << "Length of Rectangle: ";
		cin >> length;

		cout << "Width of Rectangle: ";
		cin >> width;

		area = length * width;
		cout << "Area of Rectangle: " << area << " units"<<"\n";
	}
};


int main()                                 //main code;
{

	shape* s;                              	// base class pointer;
	Rectangle r;

	s = &r;                               	// initilization of reference variable;

	s->calculate();                     	// calling of Rectangle function;
	
	return 0;
}