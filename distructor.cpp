//distructor.cpp (lab-8);
//Distructor: Program to demonstrate the concept of distructor;

#include <iostream>

using namespace std;

class Add                               //creatings class Add;
{
    private:
    int num1,num2;
    
    public:
    int sum;
    Add(int x,int y)                     //parametrised constructor;
    {
        num1=x;
        num2=y;
        cout<<"The Object is being initilized."<<endl;
    }
    int add()                            //add function;
    {
        sum=num1+num2;
        return sum;
    }
    void display()                       //display function;
    {
        cout<<"The sum is: "<<sum<<endl;
    }
    ~Add()                                //distructor;
    {
        cout<<"The Object is being Deleted with Distructor."<<endl;
    }
};

int main()                                //main code;
{
    Add obj(12,13);
    obj.add();
    obj.display();
   
   return 0;
}