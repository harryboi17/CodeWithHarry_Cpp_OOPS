#include <iostream>
using namespace std;

typedef struct employee
     {
         /* data */
         int eId;
         char favChar;
         float salary;
     }ep; // we changed struct employe name to ep 

union money
     {
         /* data */
         int rice;
         char car;
         float pound;
     }m1; 

int main(){
     //*****enum******
     enum meal{ breakfast, lunch, dinner};
     cout<<breakfast<<endl;
     cout<<lunch<<endl;
     cout<<dinner<<endl;

     //*******union*******
     // m1.rice = 45; /*since in union code share the memory, and thus here m1 pound will overwrite on memory or rice
     //                 and cout of ruce will give trash value.*/ 
     // m1.pound = 56;
     // cout<<m1.rice<<endl;
     // cout<<m1.pound<<endl;

     //**********structure********
     // ep harshit;
     // ep vanshika;
     // ep anisha;
     
     // harshit.eId = 1;
     // harshit.favChar = 'b'; //use single quote not double quote to define a char
     // harshit.salary = 30000;

     // vanshika.eId = 2;
     // vanshika.favChar = 'h';
     // vanshika.salary = 40000;

     // cout<<"the value is "<<harshit.eId<<endl;
     // cout<<"the value is "<<harshit.favChar<<endl;
     // cout<<"the value is "<<harshit.salary<<endl;
     // cout<<"the value is "<<vanshika.eId<<endl;
     // cout<<"the value is "<<vanshika.favChar<<endl;
     // cout<<"the value is "<<vanshika.salary<<endl;

return 0;
}