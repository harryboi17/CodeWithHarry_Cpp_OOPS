#include <iostream>
#include <iterator>
#include <set>
 
using namespace std;
 
int main()
{
    // empty set container
    set<int, greater<int> > s1;
 
    // insert elements in random order
    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);
     
    // only one 50 will be added to the set
    s1.insert(50);
    s1.insert(10);
 
    // printing set s1
    set<int, greater<int> >::iterator itr;
    cout << "\nThe set s1 is : \n";
    for (itr = s1.begin(); itr != s1.end(); itr++)
    {
        cout << *itr<<" ";
    }
    cout << endl;
 
    // assigning the elements from s1 to s2
    set<int> s2(s1.begin(), s1.end());
 
    // print all elements of the set s2
    cout << "\nThe set s2 after assign from s1 is : \n";
    for (itr = s2.begin(); itr != s2.end(); itr++)
    {
        cout << *itr<<" ";
    }
    cout << endl;
 
    // remove all elements up to 30 in s2
    cout
        << "\ns2 after removal of elements less than 30 :\n";
    s2.erase(s2.begin(), s2.find(30)); //can use s.erase(30) to delete 30
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout <<*itr<<" ";
    }
 
    // remove element with value 50 in s2
    int num;
    num = s2.erase(50);
    cout << "\ns2.erase(50) : ";
    cout << num << " removed\n";
    for (itr = s2.begin(); itr != s2.end(); itr++)
    {
        cout <<*itr<<" ";
    }
 
    cout << endl;
 
    // lower bound and upper bound for set s1
    cout << "s1.lower_bound(40) : \n"
         << *s1.lower_bound(40)
         << endl;
    cout << "s1.upper_bound(40) : \n"
         << *s1.upper_bound(40)
         << endl;
 
    // lower bound and upper bound for set s2
    cout << "s2.lower_bound(40) :\n"
         << *s2.lower_bound(40)
         << endl;
    cout << "s2.upper_bound(40) : \n"
         << *s2.upper_bound(40)
         << endl;
 
    return 0;
}

/*
Methods of set: 

1)  begin() – Returns an iterator to the first element in the set.
2)  end() – Returns an iterator to the theoretical element that follows last element in the set.
3)  rbegin()– Returns a reverse iterator pointing to the last element in the container.
4)  rend()– Returns a reverse iterator pointing to the theoretical element right before the first element in the set container.
5)  crbegin()– Returns a constant iterator pointing to the last element in the container.
6)  crend() – Returns a constant iterator pointing to the position just before the first element in the container.
7)  cbegin()– Returns a constant iterator pointing to the first element in the container.
8)  cend() – Returns a constant iterator pointing to the position past the last element in the container.
9)  size() – Returns the number of elements in the set.
10) max_size() – Returns the maximum number of elements that the set can hold.
11) empty() – Returns whether the set is empty.
12) insert(const g) – Adds a new element ‘g’ to the set.
13) iterator insert (iterator position, const g) – Adds a new element ‘g’ at the position pointed by iterator.
14) erase(iterator position) – Removes the element at the position pointed by the iterator.
15) erase(const g)– Removes the value ‘g’ from the set.
16) clear() – Removes all the elements from the set.
17) key_comp() / value_comp() – Returns the object that determines how the elements in the set are ordered (‘<‘ by default).
18) find(const g) – Returns an iterator to the element ‘g’ in the set if found, else returns the iterator to end.
19) count(const g) – Returns 1 or 0 based on the element ‘g’ is present in the set or not.
20) lower_bound(const g) – Returns an iterator to the first element that is equivalent to ‘g’ or definitely will not go before the element ‘g’ in the set.
21) upper_bound(const g) – Returns an iterator to the first element that will go after the element ‘g’ in the set.
22) equal_range()– The function returns an iterator of pairs. (key_comp). The pair refers to the range that includes all the elements in the container which have a key equivalent to k.
23) emplace()– This function is used to insert a new element into the set container, only if the element to be inserted is unique and does not already exists in the set.
24) emplace_hint()– Returns an iterator pointing to the position where the insertion is done. If the element passed in the parameter already exists, then it returns an iterator pointing to the position where the existing element is.
25) swap()– This function is used to exchange the contents of two sets but the sets must be of same type, although sizes may differ.
26) operator= – The ‘=’ is an operator in C++ STL which copies (or moves) a set to another set and set::operator= is the corresponding operator function.
27) get_allocator()– Returns the copy of the allocator object associated with the set.
*/