#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "how are you? " << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho? " << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base1 ::greet(); // Ambiguity Solving
    }
};

class B{
    public:
        void say(){
            cout<<"Hello World "<<endl;
        }
};

class D : public B{
    public:
        void say(){
            cout<<"Hello World 2 "<<endl;
        }
};

int main()
{
    Base1 base1obj;
    Base2 base2obj;

    base1obj.greet();
    base2obj.greet();

    Derived num1;
    num1.greet();

    D d;
    d.say(); // Here amiguity is auto resolved, as the class D have to function say(),
            //  and it choose the one which is not Inheritate but its own

    return 0;
}