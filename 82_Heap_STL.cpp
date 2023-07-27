#include <iostream>
#include <vector>
#include <queue>
#define forr(i,s,e) for(int i = s; i < e; i++)
using namespace std;

/*
top - O(1);
size - O(1);
*/

int main(){
priority_queue<int, vector<int>> pq; //Max heap
pq.push(2); //O(log(n))
pq.push(3);
pq.push(1);

cout<<pq.top()<<endl;
pq.pop(); //O(log(n))
cout<<pq.top()<<endl;

priority_queue<int, vector<int>, greater<int>> pqm; //Min heap
pqm.push(1);
pqm.push(2);
pqm.push(3);

cout<<pqm.top()<<endl;
pqm.pop();
cout<<pqm.top()<<endl;


return 0;
}