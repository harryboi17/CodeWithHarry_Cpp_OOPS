#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

/*
1) map do not insert duplicate value to a key
2) time complexcity of inserting a map[] value is O(log(n)) and same for exersion of a map.
   in a for loop it will become O(nlog(n)).
3) time complexity also takes up comparsion time, as key cannot be duplicate. thus if we insert a key of type
   string then the time complexity will become s.size()*log(n). s.size() = string size.     
*/

int main()
{
    //*********************************BASIC**************************************
    /*
    map<string, int> marksMaps;
    marksMaps["Harry"] = 50;
    marksMaps["Vanshika"] = 99; //will display alphabatically
    marksMaps["Harshit"] = 96;
    marksMaps.insert({{"HB", 189}, {"VM", 200}});
    map<string, int>::iterator itr;
    for (itr = marksMaps.begin(); itr != marksMaps.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << endl;
    }
    cout << "The size is: " << marksMaps.size() << endl;
    cout << "The max size is: " << marksMaps.max_size() << endl;
    cout << "The empty's return value is: " << marksMaps.empty() << endl;
    */


    //*********************DIFFERENT SYNTAX FOR, FOR LOOP**************************
    /*
    for (auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    } // m is the map defined, and pr is variable
    for(char ch : s) //used to traverse though a string
    */

    /*
    1) auto it = m.find(3); //finds the iterator of key 3
                         // returns m.end() if not found, else cout<<(*it).first,second;
    2) m.erase(it or key) //takes either iterator or key                    
    */


    //*****************************UNORDERED MAPS******************************   
    /*
    1) Time complexity becomes O(1). use this when you dont want to print in order
    2) Doesn't have a lot of valid data types
       for example : pair<int,int> is not a valid data type in unordered maps

    */
    unordered_map<int,int> m;


    //*********************************MultiMaps******************************
    multimap<int,string> m2;
    //used to add duplicates in maps. can store mutiple values corresponding to one string.


    //*******************************NESTING OF MAPS********************************
    /*
    map<pair<string, string>, vector<int>> m3;
    int n; cin>>n;

    for (int i = 0; i < n; i++)
    {
        string fn, ln;
        int ct;
        for (int j = 0; j < ct; j++)
        {
            int x; cin>>x;
            m3[{fn,ln}].push_back(x);
        }
        for(auto &pr : m3){
            auto &full_name = pr.first;
            auto &list = pr.second;
            // pr.second[0] is the element of the vector
            cout<<full_name.first<<" "<<full_name.second<<endl;
            cout<<list.size()<<endl;
            for( auto &element : list){
                cout<<element<<" ";
            }
            cout<<endl;
        }
    }
    */ 


   
    return 0;
}