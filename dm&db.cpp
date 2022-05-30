// dm&db.cpp (lab-10);
/* Adding Objects: Program to create two classes DM & DB. DM to stores the distance in
meter and centimeters and DB stores the distance in feet and inches and add object of Dm
class with object of DB class; */

#include <iostream>

using namespace std;
class DB;
class DM
{
private:
    double meters = 0;                        // 1mtr = 100 cm;
    double centimeters = 0;

public:
    DM(double mtrs, double cntmtrs)           // parametrized constructor to intialize values;
    {
        setMeters(mtrs);
        setCentimeters(cntmtrs);
    }
    double getMeters()                        // setter and getter functions;
    {
         return meters;
    }
    double getCentimeters()              
    { 
        return centimeters;
    }
    void setMeters(double mtrs)
    { 
        meters = mtrs;
    }
    void setCentimeters(double centmtrs)
    {
        centimeters = centmtrs;
        meters = meters + (int)centimeters / 100;
        centimeters = (int)centimeters % 100;
    }
    void display()                             //function to display values;
    {
        cout << meters << "mtrs, " << centimeters << "cms"<<endl;
    }
    friend DM add(DM &dm, DB &db);
};

class DB
{
    private:
    double feet = 0;                           // 1ft = 12 inch;
    double inches = 0;

    public:

    DB(double ft, double inch)                //constructor to initialize values;
    {
        setFeet(ft);
        setInches(inch);
    }
    double getFeet()
    { 
        return feet; 
    }
    double getInches()                         //setter and getter functions;
    { 
        return inches;
    }
    void setFeet(double ft) 
    {
        feet = ft;
    }
    void setInches(double inch)
    {
        inches = inch;
        feet = feet + (int)inches / 12;
        inches = (int)inches % 12;
    }
    friend DM add(DM &dm, DB &db);                // friend function to add objects two classes;
    void display()                                // function to display feets and inches;
    {
        cout << feet << "ft, " << inches << "inches"<<endl;
    }
};
DM add(DM &dm, DB &db)                           // definition of the function;
{
    double newCM = db.inches * 2.54;
    newCM += dm.centimeters;
    double newMtrs = db.feet * 0.3048;
    newMtrs += dm.meters;
    return DM(newMtrs, newCM);
}

int main()                                      //main code;
{
    double mtrs, centmtrs;
    double feet, inches;
    cout << "Enter Meters and Centimeters: " <<endl;
    cin >> mtrs >> centmtrs;
    cout << "Enter Feet and Inches: " <<endl;
    cin >> feet >> inches;
    DM dm1 = {mtrs, centmtrs};
    DB db1 = {feet, inches};
    DM dm2 = add(dm1, db1);
    dm1.display();
    db1.display();
    dm2.display();

    return 0;
}