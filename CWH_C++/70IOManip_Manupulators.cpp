#include <iostream>
#include <iomanip>
using namespace std;

//uppercase covert all text of iomanip func into caps
//showbase display 0x if front when hex is used and uppercase coverts that x into X
//showbase display

int main(){
    cout<<setiosflags(ios::showbase | ios::uppercase);
    cout<<setprecision(10); //C++ have default precision of 6 digits,
                            // and to print more with greater precision we have to use this funciton
    cout<<50<<endl;
    cout<<hex<<nouppercase<<100<<endl; //we can use nouppercase to prevent it from uppercasing.

    cout<<setbase(10)<<50<<endl; /* dec, if base is 10
                                    hex, if base is 16
                                    oct, if base is 8
                                    zero, if base is any other value.*/

    cout<<setw(10)<<setfill('@')<<"anil"<<endl;
    cout<<resetiosflags(ios::showbase)<<endl; // this turns off the showbase command, can be done with uppercase aswell


return 0;
}