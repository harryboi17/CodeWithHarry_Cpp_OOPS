#include <iostream>
using namespace std;

//using fucntion prototype
int sum(int a, int b);
void g(void); //can be written as void g();

int main(){
    int num1, num2;
    cout<<"entre first number"<<endl;
    cin>>num1;
    cout<<"entre second number"<<endl;
    cin>>num2;
    cout<<"the sum is "<<sum(num1, num2)<<endl;
    g(); //a function defined outside main box, will only run if it is used in main box.

return 0;
}

int sum( int a, int b){ //even though this is out of the main box,
                        // the function prototype used in starting helped it to find the fucntion outside the main box 
    int c= a+b;
    return c;
}

void g(){
    cout<<"Hello, how you doing?";
}