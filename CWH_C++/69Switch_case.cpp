#include <iostream>
using namespace std;

int main(){
switch(2)
{
case 1:
    cout<<"Case 1"<<endl;
    break;
case 2:
    cout<<"Case 2"<<endl;
    break;
case 3:
    cout<<"Case 3"<<endl;
    break;

default:   //if we dont have enough case, i.e number written in switch doesnt exist.
    cout<<"Case default"<<endl;
    break;
}

return 0;
}