#include <iostream>
using namespace std;

/*
class DerivedC : visibility-mode base1, visiblity-mode base2
{
Class body of class "DerivedC"
};
*/

class Base1{
    protected:
        int base1int;
    public:
        void get_base1int(int a){
            base1int = a;
        }
};

class Base2{
    protected:
        int base2int;
    public:
        void get_base2int(int a){
            base2int = a;
        }
};

class Dervied : public Base1 , public Base2{
    public:
        void show(){
            cout<<"the value of Base1 is "<<base1int<<endl;
            cout<<"the value of Base2 is "<<base2int<<endl;
            cout<<"the sum of these values is "<<base1int + base2int<<endl;
        }
};

int main(){
    Dervied D;
    D.get_base1int(27);
    D.get_base2int(23);
    D.show();


return 0;
}