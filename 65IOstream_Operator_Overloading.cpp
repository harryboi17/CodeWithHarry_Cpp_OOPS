#include <iostream>
using namespace std;
/*
The phrase iostream stands for 2 classes:
Ostream & istream classes.
The "<<" stream extraction opertator is a object of the class Ostream which is also called console output
The ">>" stream insertion operator is a object of the class Istream which is also called console input

NOTE: it can't be class member function, you have to define it as the friend function of your class
NOTE 2: istream and ostream classes already have the overloaing of intergers or strings or other data type but not the class.
*/

class Test{
    int x;
    public:
        Test(){
            x = 0;
        }

        friend istream &operator >>(istream &input, Test &obj);
        friend ostream &operator <<(ostream &output, Test &obj);
};
 
 //Insertiion and extraction operator overloading
istream &operator >>(istream &input, Test &obj){
    input>> obj.x;
    return input;
}

ostream &operator <<(ostream &output, Test &obj){
    output<< obj.x<<endl;
    return output;
}

int main(){
    Test t;
    cin>>t;
    cout<<t; //if we dont use cin here, then the cout will give out default value 0.

return 0;
}