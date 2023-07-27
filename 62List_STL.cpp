#include <iostream>
#include <list>

using namespace std;

// cppreference.com
void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; //list of zero lenght
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    list1.push_back(12);
    display(list1);
    // list1.pop_front();
    // list1.pop_back();
    // list1.remove(9); // this will remove all the nines in the list
    // list1.reverse();
    // display(list1);
    

    //****Sorting the list***
    list1.sort();
    display(list1);
    

    list<int> list2(2); //empty list of size 2, thus can only store 2 elements.
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 7;
    iter++;
    *iter = 6;
    iter++;
    display(list2);
    list2.sort();

    list1.merge(list2);
    cout<<"list 1 after merging: ";
    display(list1);

    return 0;
}