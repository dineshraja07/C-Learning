#include<iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;
/*
1. set include no duplicate element
2. set has elements in sorted automatically
3. no indexing
4.insert() and erase is good but no modifying of existing element 
no concept of fron and back
*/
int main()
{  
    set<int> set={1,2,10,9,3,4,5,4,6};
        set.insert(1000);
    for(auto i:set)
    {
        cout<<i<<" ";
    }
    cout<<"\n======================"<<endl;

    set.erase(4);//remove (4)
    auto it=set.find(1000);
  /*  If the element is found, it returns an iterator to its position in the set.
If the element is not found, then it returns the iterator to the end.*/
    set.erase(it);//erase (1000) using iterator
     for(auto i:set)
    {
        cout<<i<<" ";
    }
    cout<<set.count(1); //return 1 or 0 , since set eliminate duplicates
        cout<<"\n======================"<<endl;
    set.clear(); //remove all the element;
   cout<< set.empty()<<endl;//true or false
}