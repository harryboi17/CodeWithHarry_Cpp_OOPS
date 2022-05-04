#include <iostream>
using namespace std;

class BaseClass{
    public:
        int var_base = 10;
        virtual void display(){ //used to over right the default behaviuor
                                // now since it is virtual now if we use pointer of Base class to point at object of derived class
                                // then while running the display function, the display will be executed of Derived class, unlike last
                                // code(code:49) 
            cout<<"1. Displaying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived = 20;
        void display(){
            cout<<"2. Displaying Base class variable var_base "<<var_base<<endl;
            cout<<"2. Displaying Derived class variable var_display "<<var_derived<<endl;
        }
};

int main(){
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();

return 0;
}