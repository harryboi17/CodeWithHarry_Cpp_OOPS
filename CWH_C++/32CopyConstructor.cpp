    #include <iostream>
using namespace std;

class number
{
    int a;

public:
    number() {}

    number(int num)
    {
        a = num;
    }

//when no copy constructor is found, compiler supplies its own copy constructor
// that is, the code will run even without the function mentioned below
    number(number &obj)
    {
        cout<<"copy constructor called "<<endl;
        a = obj.a;
    }

    void display()
    {
        cout << "the number for this object is " << a << endl;
    }
};

int main()
{
    number x, y, z(45), z3;
    z.display();
    y.display();
    x.display();

    // z1 should exaclty resemble z or x or y
    number z1(x);
    z1.display();

    number z2(z1);
    z2.display();

    z3 = z;
    z3.display(); // here copy constructor is not called

    number z4 = z;
    z4.display(); // here copy constructor is called

    return 0;
}