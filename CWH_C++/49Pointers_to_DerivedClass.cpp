#include <iostream>
using namespace std;

class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"Displaying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying Base class variable var_base "<<var_base<<endl;
            cout<<"Displaying Derived class variable var_display "<<var_derived<<endl;
        }
};

int main(){
    BaseClass *base_class_pointer;
    BaseClass obj_base;

    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // Base class pointer can point toward the Derived Class object

    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 99; //This will throw an error, as it can only change or access data of base clas

    (*base_class_pointer).display(); // Even though the pointer is pointing towards the object of Derived class,
                                     // but while calling the function display which is same in both class, the function which is 
                                     // called will be of Base class.
                
    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;

    derived_class_pointer->var_base = 77;
    derived_class_pointer->var_derived = 78;
    derived_class_pointer->display();

return 0;
}