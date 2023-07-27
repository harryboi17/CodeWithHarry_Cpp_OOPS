#include <iostream>
#include <queue>
using namespace std;
/*
first in first out.
Time Complexity : 
*/
int main(){
queue<string> q;
q.push("harhsit");
q.push("vanshika");
q.push("anisha");
while(!q.empty()){
    cout<<q.front()<<endl;
    q.pop(); //removes the first inserted element
}

return 0;
}