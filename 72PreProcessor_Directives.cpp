#include <iostream>
#define PI (3.14159)
#define square(a) a*a
#undef PI
/*
*********************Preprocessors****************
#include: works as a copying object
          as it just copies the full code of iostream and put it here

#define: it is used to define marco objects such as constants functions

#undef: undefine what has been defined

#ifdef #endif: conditional statement

#Error: used to trigger error in the piece of code(can be used along if statements)

#pragma : use the statement one after this to prevent two same header file going in recurrsion
          i.e. if the we include 2 header file containing same code, then this will trigfer only one.
*/
using namespace std;

int main(){
    // cout<<PI<<endl; //this will give error as PI has been undefined
    cout<<square(5)<<endl;
    int i = 5;
    cout<<square(i++)<<endl; /* technically here we should get 25 and i as
                                6 but since this function just copy whats given, it will actually 
                                multiply i++*i++ and thus give us 5*6 and return i = 7.
                                so its not recommended to use define as function
                             */ 
    cout<<i<<endl;

    #ifdef PI
    cout<<"PI is defined"<<endl;
    #endif

return 0;
}