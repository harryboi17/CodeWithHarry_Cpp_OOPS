#include <iostream>
#include<vector>

//cplusplus.com vector methods
using namespace std;

template<class T>
void display(vector<T> &v){
    cout<<"displaying this vector"<<endl;
    for (T i = 0; i < v.size(); i++) //v.size() is default fucn of vector
    {
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" "; //both syntax are same

    }
    cout<<endl;
}

int main(){
    //****************************HOW TO CREATE A VECTOR****************************
    /*
    vector<int> vec1; //zero lenght vector
    int element,size;

    cout<<"Enter the size of the vector "<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"entre an element to add to this vector ";
        cin>>element;
        vec1.push_back(element); // push_back element is a default func of vector
    }
    // vec1.pop_back(); // removes the last element.
     display(vec1);

    vector<int> :: iterator iter = vec1.begin();
    */


    //***********************FUNCTIONS IN VECTOR************************************
    // vec1.insert(iter, 566); //using iterator //this will display before the first vector
    // display(vec1);

    // vec1.insert(iter+1, 566); // this will display before the second vector
    // display(vec1);
    
    // vec1.insert(iter+1,5, 566); // inserting multiple copies
    // display(vec1);

    //vec1.erase(v.begin()+i)


    //****************************TYPE OF VECTORS*************************************
    // vector<char> vec2(4);    // 4-element char vector
    //                          // if we made a int vector, then a vector of size 4
    //                          // with 0,0,0,0 as its elements will be created
    // cout<<vec2.size()<<endl;
    // vec2.push_back('5');
    // vec2.push_back('p');
    // vec2.push_back('6');
    // vec2.push_back('6');
    // vec2.push_back('6');
    // display(vec2); 
    // cout<<vec2.size()<<endl;
    
    // vector<char> vec3(vec2); // 4-element character vector from vec2

    // vector<int> vec4(6,3); //6-element vector of 3s
    // display(vec4);
    // cout<<vec4.size();


    //**************************CREATING 2D VECTOR***************************************
    /*
    int n;
    cin >> n;
    vector<vector<int>> matrix;
    for (int i = 0; i < n; i++)
    {
        matrix.push_back(vector<int>());
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            matrix[i].push_back(x);
        }
    }
    */

   
return 0;
}