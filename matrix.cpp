//matrix.cppp (Lab 1);
//Read Matrix: Programme to read matrix using function;

#include<iostream>
using namespace std;

class Matrix
{
    private:
    int**array;
    
    public:
    int i,j;
   int matrix(int m, int n)          // Dynamic memomy allocation;
    {
        array=new int*[m];
        for(i=0;i<m;i++)
        {
            array[i]=new int[n];
        }
        return 0;
    }
    void Input(int m,int n)            // Taking user input;
    {
        cout<<"Enter the elements of Matrix: "<<endl;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<"A["<<i<<"]["<<j<<"] : ";
                cin>>array[i][j];
            }
        }
    }
    void Display(int m,int n)           // Display function;
    {
        cout<<"Your Matrix is: "<<endl;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<array[i][j]<<" ";
            }
            cout <<endl;
        }
        cout<<endl;
    }
};
int main()                          // Main code;
{
    int m,n; Matrix A;
    cout<<"Enyter the size of matrix: "<<endl;
    cin>>m>>n;
    A.matrix(m,n);
    A.Input(m,n);
    A.Display(m,n);
    return 0;
}
