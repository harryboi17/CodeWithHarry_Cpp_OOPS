#include <iostream>
using namespace std;

class employee{
    private:
        int a, b, c;
    public:
        int d, e;
        void setdata(int a1, int b1, int c1);
        void getdata(){
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
            cout<<"the value of d is "<<d<<endl;
            cout<<"the value of e is "<<e<<endl;
        }    
};

void employee :: setdata(int a1, int b1,  int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    employee harshit;
    harshit.d = 34;
    harshit.e = 67; // we cannont get harshit.a or b or c with harshit.a as it is
                    // private and can only be access with setdata function
                    // it is used for data security
    harshit.setdata(1,2,5);
    harshit.getdata();
    
return 0;
}