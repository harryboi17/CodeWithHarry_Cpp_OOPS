#include <iostream>
using namespace std;
//Standard Template Library-----> "STL"

/*
***********************COMPONENTS OF STL********************
1. Containers -> stores data
                 use template class

2. Algorithms -> sorting
                 searching
                 use template functions

3. Iterators ->  its a object which points towards element in a container.
                 handled just like pointers.
                 connects algorithms with containers.             
*/

/*
***********************CONTAINERS*******************
1. Sequence Containers ->    linear fashion addition
                             Ex: vector, list, Dequeue(Double Ended Queue)

                             When to use:
                                Vector:
                                    random access ->      fast
                                    insertion/deletion -> slow
                                    insertion at end ->   fast
                                List:
                                    random access ->      slow
                                    insertion middle ->   fast
                                    insertion at end ->   fast
                                                  
2. Associative Containers -> direct access
                             tree like structure data storing
                             Ex: set, multiset, map, multimap

                             When to use: all operations are fast except random access
                            
3. Derived Containers ->     real world modeling
                             Ex: stack(last in, first out), queue(first in, first out), priority queue

                             When to use: depends(learn in Data Structure)
*/
