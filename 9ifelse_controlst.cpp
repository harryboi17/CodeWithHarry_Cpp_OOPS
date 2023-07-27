#include<iostream>
#include<iomanip>
using namespace std;

int main(){
int age;
cout<<"tell me your age"<<endl;
cin>>age;

// *****selection control structure******* if else
// if(age<18 && age>0){
//     cout<<"u cannot come to the party"<<endl;
// }
// else if(age==18){
//     cout<<"you are a kid and you will get kid pass to the party"<<endl;
// }
// else if(age<1){
//     cout<<"u are not yet born"<<endl;
// }
// else{
//     cout<<"u can come to party"<<endl;
// }

// selection control structure: switch case statement
switch (age)
{
case 18:
    cout<<"you are 18"<<endl;
    break; //the break stops further actions, without break all cout will be printed below

case 22:
  cout<<"you are 22"<<endl;
    break;

case 2:
    cout<<"you are 2"<<endl;
    break;

default:
cout<<"no special case"<<endl;
    break;
}
return 0;
}