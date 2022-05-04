#include <iostream>
using namespace std;

class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getData1();
    int getData2();
};

void base :: setdata(void){
    data1 = 10;
    data2 = 20;
}

int base :: getData1(){
    return data1;
}

int base :: getData2(){
    return data2;
}

class Derived : public base /* now if we would have derived it as private then we wouldnt be able to call
                                getdata function in main body of cody, as getdata function will become a private member
                                of the the class derived and cannot be directly called, but if we put the getData function
                                in process function, we can call it through process in mainbody.
                            */
{
    int data3;

public:
    void process();
    void display();
};

void Derived :: process(){
    data3 = data2*getData1();   
}

void Derived :: display(){
    cout<<"Value of data1 is "<<getData1() <<endl;
    cout<<"Value of data1 is "<<data2 <<endl;
    cout<<"Value of data1 is "<<data3 <<endl;
}

int main()
{
    Derived der;
    der.setdata();
    der.process();
    der.display();

    return 0;
}