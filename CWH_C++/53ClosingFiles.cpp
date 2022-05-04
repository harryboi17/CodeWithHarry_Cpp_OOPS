#include <iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream hout("53sample.txt");
    cout<<"entre your name"<<endl;
    string name;
    cin>>name;

    hout<<"my name is " + name<<endl;

    hout.close();
    hout<<name; //This will not work, as the program is closed

    ifstream hin("53sample.txt");
    string content;
    // hin>>content;
    getline(hin, content);
    cout<<"The content of this file is: "<<content;
    hin.close();

return 0;
}