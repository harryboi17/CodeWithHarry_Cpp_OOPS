#include <iostream>
#include <vector>
using namespace std;

int main(){
/*   
pair<int,string> p;
p = make_pair(2, "marks");
p = {2, "abcd"};
cout<<p.first<<" "<<p.second<<endl;

pair<int,string> p1 = p;
p1.first = 3;
cout<<p1.first<<" "<<p1.second<<endl; 
cout<<p.first<<" "<<p.second<<endl;

pair<int,string> &p2 = p;
p2.first = 3;
cout<<p1.first<<" "<<p1.second<<endl; 
cout<<p.first<<" "<<p.second<<endl; //here the value of p got changed due to change at the address
*/


/*
int a[] = {1,2,3}; int b[] = {4,5,6};
pair<int,int> p[3];
for (int i = 0; i < 3; i++)
{
    p[i] = {a[i], b[i]};
    cout<<p[i].first<<" "<<p[i].second<<endl;
}
cout<<endl;
swap(p[0], p[2]); //swaps the sequence of all pair between 0 and 2
for (int i = 0; i < 3; i++)
{
    cout<<p[i].first<<" "<<p[i].second<<endl;
}
*/

//******************************VECTOR OF PAIR******************************
/*
vector<pair<int, int>> v = {{1,2}, {2,3}, {3,4}};
cout<<v[0].first<<" "<<v[0].second<<endl;
v.push_back({4,5});
*/


return 0;
}