#include <iostream>
using namespace std;

inline int product(int a, int b){ 
    //use inline only on the less memory storing function
    //it increase the speed of code execution
    //do not use inline in recurssion functions.

    // static int c = 0; // this executes only once
    // c = c + 1; //next time the function is run, the value of c will be retained
    return a*b;
}

float moneyreceived(int currentmoney, float factor=1.04){
// write compulsory arguments first and then write defualt argumentes next
return currentmoney* factor;
}

// constant argument
// int strlen(const char *p){
// }

int main(){
    int a, b;
    // cout<<"entre the value of a and b "<<endl;
    // cin>>a>>b;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;  
    int money = 100000;
    cout<<"if you have "<<money<<"Rs in your bank account, you will receive "<<moneyreceived(money)<<"Rs after one year "<<endl;
    cout<<"for VIP: if you have "<<money<<"Rs in your bank account, you will receive "<<moneyreceived(money, 1.1)<<"Rs after one year "<<endl;
    
return 0;
}