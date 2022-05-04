#include <iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"the real part is "<<real<<endl;
            cout<<"the imaginary part is "<<imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};

int main(){
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;

    // (*ptr).setData(1, 45);
    //is exactly same as
    ptr->setData(1, 45); //****ARROW OPERATOR****

    // c1.getData();
    // (*ptr).getData();
    ptr->getData();

    //******ARRAY of Objects********
    Complex *ptr1 = new Complex[4];
    ptr1->setData(1,56);
    ptr1->getData();

return 0;
}