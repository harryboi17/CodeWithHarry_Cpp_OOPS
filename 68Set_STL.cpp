#include <iostream>
#include <iterator>
#include <set>
using namespace std;
/*
Time Complexity : O(log(n))
Time Complexity in Unordered_set : O(1)
Unordered_set doesn't have a lot of valid data types
*/

void print(set<char> &s){
    for(char value : s){
        cout<<value<<" ";
    }
}

int main(){
    set<char> s1;
    string name; cin>>name;
    for(char ch : name){
        s1.insert(ch);
    }
    print(s1);

    multiset<string> s; //O(log(n));
                        // allow to store multiple values in a set
                        //s.find() will return the iterator of first known element you have to find
    //Note: if you want to use s.erase() and only have to delete only one value of two same value
    //      then use s.erase(it) instead of s.erase("abc"), cause it will delete all values.
    //      it can be found be s.find()

return 0;
}