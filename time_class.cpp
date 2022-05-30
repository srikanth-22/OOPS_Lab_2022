//time_class.cpp (lab-9);
//Time Class: Program to store time in hours and minute using friend function
#include<iostream>
using namespace std;

class TIME                               //Creating class of Time;
{

  int hours, minutes,add;                // creating data members;
  public: 

  void input()                          //creating and define function to take input;
{
  cout << "Enter the value of hours and minutes : "<<endl;
  cin >> hours>>minutes;
 }

  friend void add(TIME &t);             //creating friend function;

  void display()                       // creating and derive the function for display output; 
 {
     hours=hours*60;
   cout << "The sum is :" <<hours+minutes;
 }
};
  void add(TIME &t)                    //creating function to add the object;
{
   t.add = t.hours + t.minutes;
}
int main()                              //main code;
  {

   TIME t1;                              //creating object;

   t1.input();                           //calling the fucntion to take the input; 

   add(t1);                             //calling the fucntion to add the two values;

   t1.display();                       //calling the function to display the result;
   return 0;
}