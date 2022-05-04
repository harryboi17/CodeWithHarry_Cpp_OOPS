#include <iostream>
using namespace std;

class complex{
    int a,b; 
    public:
        void setNumber(int n1, int n2){
            a=n1;
            b=n2;
        }

        friend complex sumcomplex(complex o1, complex o2);

        void printNumber(){
                cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex sumcomplex(complex o1, complex o2){
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
};

int main(){
    complex c1,c2, sum;
    c1.setNumber(1,4);
    c1.printNumber();

    c2.setNumber(5,8);
    c2.printNumber();

    sum = sumcomplex(c1,c2);
    sum.printNumber();

return 0;
}

/* properties of friend fucntions
1. not in the scope of class i.e. its just give permission to access the private data
2. since it is not in the scope of the class, it cannot be called from the object of that class.
   c1.sumcomplex() is not possible
3. can be invoked without the help of any object
4. usually contains the object as the argument
5. can be declared in the public or private section of class
6. it cannot excess the member directly by the names and need obejct_name.member_name
   to access any member.   
*/