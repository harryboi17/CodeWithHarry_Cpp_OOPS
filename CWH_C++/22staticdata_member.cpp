#include <iostream>
using namespace std;

/*
When static keyword is used, variable or data members or functions can not be modified again. 
It is allocated for the lifetime of program. Static functions can be called directly by using class name.
class::varibale.

Static variables are initialized only once. Compiler persist the variable till the end of the program. 
Static variable can be defined inside or outside the function. 
They are local to the block. The default value of static variable is zero. 
The static variables are alive till the execution of the program.

static member function can only access static variable of the class.
*/

class employee
{
    int Id;
    static int count; //this made it class variable

public:
    void setData(void)
    {
        cout << "entre the Id " << endl;
        cin >> Id;
        count++;
    }
    void getData(void)
    {
        cout << "the Id of this employee is " << Id << " and this is employee number " << count << endl;
    }

    static void getCount(void){
        cout<<"the value of count is "<<count<<endl;
    }
};

int employee::count; //= 5
                     //we can initialise the count from here by giving a specific starting number
                     //we made a static varible, as every employee was having a diffrent count
                     //and thus it would have displayed employee number 1 for every employee
int main()
{
    employee harshit, vanshika, anisha;

    harshit.setData(); // cannot use harshit.Id as they are private
    harshit.getData();
    employee::getCount();

    vanshika.setData();
    vanshika.getData();
    employee::getCount();

    anisha.setData();
    anisha.getData();
    employee::getCount();

    return 0;
}