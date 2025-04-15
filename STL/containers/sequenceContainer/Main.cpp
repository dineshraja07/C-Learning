#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
int main()
{
    
    vector<int> vec{1,2,3,4,5};
    vec.insert(vec.begin()+1,20000);//can access randomly
     vec.erase(vec.begin()+1);
     auto it1=vec.begin();
     it1=it1+2; //in vector it works
     it1++;
     it1--; 
     it1=it1-2;
     vec.insert(it1,2101049);
        cout<<"[ ";
    for(auto i:vec)
     { 
        cout<<i<<" "; 
     }
     cout<<" ]"<<endl;
    
    cout<<"\n========================================"<<endl;
     list<int> list{1,2,3,5};//list is doubly linked list , no random access
     auto it2=list.begin();
    //  it=it+3;//it shows error , since, in list +,- are not overloaded
     advance(it2,2);//advance moves the iterator
     list.insert(it2,120);
     cout<<"[ ";
     for(auto i:list)
     { 
        cout<<i<<" "; 
     }
     cout<<" ]"<<endl;

    
      
}
