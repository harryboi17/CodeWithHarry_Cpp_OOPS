#include <iostream>
using namespace std;

// A-->B
// if both A class and B class have a constructor, then in B class the class A constructor will be called first
// A-->C and B-->C
//then the constructor in class C will be called on the bases of order in which they appear in the declaration  

//Constructor for Virtual Base class are invoked before an non virtual base class

class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 class consrtructor called"<<endl;
        }

        void print_data1(){
            cout<<"the value of data is "<<data1<<endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"Base2 class consrtructor called"<<endl;
        }

        void print_data2(){
            cout<<"the value of data is "<<data2<<endl;
        }
};

class Derived: public Base2, public Base1{ // here order of calling the constructor will be first Base2 and then Base 1
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d): Base1(a), Base2(b){ //here a is the value assigned to constructor of Base1
                                                                 // and b is the value assigned to constructor of Base2
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor is called "<<endl;
        }
        
        void print_data(){
            cout<<"the value of data is "<<derived1<<endl;
            cout<<"the value of data is "<<derived2<<endl;
        }
};


int main(){
    Derived a(1,2,3,4);
    a.print_data();
    a.print_data1();
    a.print_data2();


return 0;
}