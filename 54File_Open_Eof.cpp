#include <iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out;
    out.open("54sample.txt");
    out<<"this is me \n";
    out<<"this is me also ";
    out<<"this is me also";
    out.close();

    ifstream in;
    string st, st2;
    in.open("54sample.txt");
    // in>>st>>st2;
    // cout<<st<<st2;

    while (in.eof() ==0) // End of file
    {
        getline(in, st);
        cout<<st<<endl;
    }
    in.close();
    


return 0;
}