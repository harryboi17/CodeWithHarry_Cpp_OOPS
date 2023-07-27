#include <iostream>
using namespace std;

int factorial(int n){
     if (n<=1){
         return 1;
     }
     return n*factorial(n-1);
}

int fib(int n){
    if (n<=1){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

int main(){
     int a;
     cout<<"entre a number "<<endl;
     cin>>a;
    //  cout<<"the factorial of a is "<<factorial(a)<<endl;
     cout<<"the fib number at a is "<<fib(a)<<endl;
      
return 0;
}