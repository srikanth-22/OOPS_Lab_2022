// power_function.cpp (lab-3);
// Function Power: A program having function "Power" to raise a number m to the power of n (use default value n=2)

#include<iostream>
using namespace std;

class Power                              // Creating class "Power";
{
    public:
    double power(double m,int n=2)       // declaring power caliculation function with default argument n=2;
    {
        double result=1;
        for(int i=0;i<n;i++)
        {
            result*=m;
        }
        return result;
    }
};
int main()                              // main code;
{
    Power x;                            // declaring a class variable;
    double m;
    int n;
    cout<<"Enter the m,n in m^n  ";
    cin>>m;
    cin>>n;
    cout<<"the result is  " <<x.power(m,n);        //calling power function in output;
    return 0;
}