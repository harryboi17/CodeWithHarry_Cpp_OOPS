#include <iostream>
using namespace std;

template<class T1=int, class T2=float, class T3 = char> //default data type
class Harshit{
    public:
        T1 a;
        T2 b;
        T3 c;
        Harshit(T1 x, T2 y, T3 z){
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<endl;
        }
};

int main(){
    Harshit<> h(4, 4.6, 'c');
    h.display();

    Harshit<float, char, char> g(4.78, 'o', 'c'); //we changed the default datatype
    g.display();

return 0;
}