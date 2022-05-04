#include <iostream>
#include <stack>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
/*
last in first out.
Time Complexity : 
*/

unordered_map<char, int> symbols = {{'(', -1}, {'{', -2}, {'[', -3}, {')', 1}, {'}', 2}, {']', 3}};

string isBalanced(string s)
{
    stack<char> st;
    for (char ch : s)
    {
        if (symbols[ch] < 0)
        {
            st.push(ch);
        }
        else
        {
            if (st.empty())
                return "NO";
            char top = st.top();
            st.pop();
            if (symbols[ch] + symbols[top] != 0)
            {
                return "NO";
            }
        }
    }
    if (st.empty())
        return "YES";
    return "NO";
}

int main()
{
    /*
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop(); //removes the last inserted element
    }
   */

    //*******************QUESTION*******************
    /*
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        cout<<isBalanced(s)<<endl;
    }
    */

    //***********************QUESTION2: NEXT GREATER ELEMENT*************************
    stack<int> st;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int NGE[n];

    for (int i = 0; i < n; i++)
    {   
        while (arr[i] > arr[st.top()] && !st.empty())
        {
            NGE[st.top()] = arr[i];
            st.pop();   
        }
        st.push(i);
    }
    while (!st.empty())
    {
        NGE[st.top()] = -1;
        st.pop();
    }
    
    for (int i = 0; i < n; i++)
    {
       cout<<NGE[i]<<" ";
    }
    
    return 0;
}