#include<iostream>
#include<string>
#include<vector>
#include<memory>
using namespace std;
int main()
{
    shared_ptr<int> ptr{new int};
    *ptr=100;
    cout<<*ptr<<endl;
    cout<<ptr.use_count()<<endl;//count of no of object in heap referred by ptr
    shared_ptr<int> ptr2=ptr;//copy is possible
    cout<<ptr.use_count()<<endl; //output: 2
    ptr.reset();//ptr is null out but int object is still in heap
    cout<<ptr.use_count()<<endl;// output: 0


    shared_ptr<int> p1=make_shared<int>(1);//count :1
    cout<<p1.use_count()<<endl;
    shared_ptr<int> p2{p1};//count:2
     cout<<p1.use_count()<<endl;
    shared_ptr<int> p3;//count:3
     p3=p2;
    cout<<p1.use_count()<<endl;// 3
    cout<<p2.use_count()<<endl;// 3
    cout<<p3.use_count()<<endl;// 3
   
}
//unlike unique pointer, shared_ptr , multiple pointers can refer a same memory in heap
//can be copy and assign
//can be move