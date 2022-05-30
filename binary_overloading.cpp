//ninary_overloading.cpp (lab-12);
//Binary Operatoe Overloading: Program to overload binary operator;

#include <iostream>
using namespace std;
class Temp                                 // creating a class Temp;
{
    private:
    int data;
    public:
    void getvalue()                         // function to store data;
    {
        cin>>data;
    }
    Temp operator+(Temp ob)                // + Operator overloading;
    {
        Temp t;
        t.data=data + ob.data;
        return t;
    }
    Temp operator- (Temp ob)                // - Operator overloading;
    {
        Temp t;
        t.data = data - ob.data;
        return t;
    }
    
    int display()                           // display function;
    {
        return data; 
    }
};
int main()                                  // main code;
{
    
    Temp obj1, obj2, sum, sub;              // creating objects;               
    cout<<"enter an integer value for obj1: "<<endl;      // input from user;
    obj1.getvalue();
    cout<<"Enter an integer value for obj2: "<<endl;
    obj2.getvalue();
    sum= obj1+obj2;                          // adding two numbers;
    sub= obj1-obj2;                          // subtracting of two numbers;
    cout<<"Addition result is = "<<sum.display()<<endl;
    cout<<"Subtraction result is = "<<sub.display()<<endl;
    return 0;
    
}