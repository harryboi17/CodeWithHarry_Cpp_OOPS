#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
string str(5, 'h');
string str1;
// getline(cin, str1);
//cin.getline(str,80) //used to cin char array and 80 in char array length
//get(str) //same as cin.getline //use puts(str) to get str output
// cout<<str<<endl;
// cout<<str1<<endl;;

string s1 = "famjamdam";
string s2 = "ilypeleel";

// s1.append(s2); // this functions works as s1 = s1+s2
// cout<<s1;
// s1 = s1+s2;
// cout<<s1;
 
// cout<<s1.find("jam");//gives out the index from where the word starts.
// s1.insert(2, "lol") // 2 is the index where to insert and lol is the word to insert
// s1.clear(); //delete k characters stored in the string
//s1.empty(); //checks if string is empty, used in if condition statements
//s1.erase(4,2) //here 4 is the index and 2 is number of character to erase from index 4
// cout<<s1.compare(s2)<<endl; // gives out a random value if strings are not equal and give 0 is they are equal
//strcat(str, a); //works same as append  
//s.substr(1) //gives the string after teh stated index  
//tostr(int) //to convert any data type into string

string s  = s1.substr(4, 6); // 4 is index and 5 is number of characters from their onwards
cout<<s<<endl;

//********convert int into string**********
int x = 100;
cout<<to_string(x) + "2"<<endl;    

sort(s1.begin()+3, s1.end()-2); //sort comes under #include algorithm
cout<<s1<<endl;

return 0;
}