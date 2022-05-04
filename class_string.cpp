//class_string.cpp (lab-6);
//Class String: Progra to create class String to store, add, equtate and output strings;

#include<iostream>
using namespace std;
const int str=30;

class STRING
{
private:
    char A[str];
public:
    STRING()                            //Default constructor;
	{
       
    }

    void getString()                    //Function to store string;
	{
        cout<<"Enter a String to store: ";
        cin.getline(A,str);
    }

    void displayString()                //Function to display string;
	{
        cout<<"Stored string is: "<<A<<endl;
    }

    int length()                        //Function to get string length;
	{
        int i=0;
        for(i=0;A[i]!='\0';i++);
        return i;
    }

    bool equateString(STRING &B)        //Function to equate strings;
	{
        int i=0;
        for(i=0;A[i]!='\0';i++){
            if(B.A[i]!=A[i]){
                return false;
            }
        }
        return true;
    }

    void addString(STRING &B)            //Function to add strings;
	{
        STRING temp;
        int i=0;
        cout<<"Concatenated String is: ";
        for(i=0;A[i]!='\0';i++)
		{
            temp.A[i]=A[i];
            cout<<temp.A[i];
        }
        for(int j=0;j<B.length();j++)
		{
            temp.A[j]=B.A[j];
            cout<<temp.A[j];
        }
    }

};

int main()                              //Main code;
{
    STRING string1,string2;

    string1.getString();                //storing first string;
    string1.displayString();            //calling displayString function;

    cout<<" "<<endl;

    string2.getString();               //storing second string;
    string2.displayString();           //displays second string;
    cout<<" "<<endl;

    if(string1.equateString(string2))  //comparing both strings;
	{
        cout<<"Given strings are equal !!"<<endl;
    }else{
        cout<<"Given strings are not equal !!"<<endl;
    }

    cout<<" "<<endl;

    string1.addString(string2);        //Adding the strings;
    cout<<endl;

    return 0;
}