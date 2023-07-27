#include <iostream>
using namespace std;

//This is Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(){};
    Employee(int inpID)
    {
        id = inpID;
        salary = 34;
    }
};

//Derived Class
/*class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}{
    class members/methods/etc...
}*/

/* 
1.) Default visibility mode is private
2.) Public visibility mode: Public members of the base class becomes Public members of the derived class
3.) Private visibility mode: Public members of the base class becomes private members of the derived class
4,) Private members of Base class can never be Inherited
*/

//Creating a Programmer class derived from Employee base class
class programmer : public Employee // without using public we cannot access id, and cannot use XYZ.id
{
public:
    programmer(int Inpid)
    {
        id = Inpid;
    };
    int languageCode = 9;

    void getdata(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee Harshit(1), Vanshika(2);
    cout << Harshit.salary << endl;
    cout << Vanshika.salary << endl;

    programmer skillF(1);
    cout << skillF.languageCode<<endl;
    skillF.getdata();
    cout<<skillF.id<<endl;

    return 0;
}