#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;

class SimpleCalculator{
    protected:
    int num1, num2, num3,num4;
    public:
    int set_number(int a, int b){
        num1 = a;
        num2 = b;
        cout<<"num1 is "<<num1<<endl;
        cout<<"num2 is "<<num2<<endl;
    }

    int sum(){
        num3 = num1 + num2;
        cout<<num3<<endl;
    }

    void diff(){
        num4 = num1 - num2;
        cout<<num4<<endl;
    }
};

class ScientificCalculator{
    protected:
        int n1, n2, n3;
        float n4;

    public:
        int Set_number(int a, int b){
            n1 = a;
            n2 = b;
            cout<<" the numbers are "<<n1<<", "<<n2<<endl;
        }

        int multiply(){
            n3 = n1*n2;
            cout<<n3<<endl;
        }

        float divide(){
             n4 = float(n1)/n2;
            cout<<n4<<endl;
        }  
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator{
    

};

int main(){
SimpleCalculator S;
S.set_number(3, 5);
S.sum();
S.diff();

ScientificCalculator S1;
S1.Set_number( 8, 7);
S1.multiply();
S1.divide();
return 0;
}