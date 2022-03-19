#include<iostream>
using namespace std;

class Power
{
    public:
    double power(double m,int n=2)       // power caliculation function
    {
        double result=1;
        for(int i=0;i<n;i++){
            result*=m;
        }
        return result;
    }
};
int main()
{
    Power x;
    double m;
    int n;
    cout<<"Enter the m,n in m^n  ";
    cin>>m;
    cin>>n;
    cout<<"the result is  " <<x.power(m,n);
    return 0;
}