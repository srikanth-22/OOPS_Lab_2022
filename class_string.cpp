#include <iostream>
using namespace std;
class String
{
private:
    char str[100];
    int size;

public:
    void storestring(char *A, int n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            str[i] = A[i];
        }
        /* for(int j=0;j<=n;j++){
             store[j] =A[j];
         } */
        cout <<"string store sucessfully;"<<str<<endl;
    }
    void addstring(char *B, int n)
    {
        int count = 0;
        for (int j = 0; j<n; j++)
        {
            cin >> B[j];
        }
        while (str[count] != '\0')
        {
            size = count++;
        }
        for (int i = 0; i < sizeof(B); i++)
        {
            str[size+i+1] = B[ i ];
        }

        cout << "Adding two strings: "<<str<<endl;
    }
    void equate(char *a, char *b)
    {
        if (a == b)
        {
            cout <<"Yes they are equal;"<< endl;
        }
        else
        {
            cout <<"No they are not equal;";
        }
    }
};
int main()
{
    char b[100];
    char c[100];
    int n;
    String A;
    cout <<"Size of string: "<< endl;
    cin >> n;
    cout <<"Enter the string: "<<endl;
    A.storestring(b, n);
    cout <<"Enter the second string you want to add: "<<endl;
    A.addstring(c, n);
    A.equate(b, c);

    // a1.print();
    return 0;
}
