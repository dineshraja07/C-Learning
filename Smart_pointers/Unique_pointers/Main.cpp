#include<iostream>
#include<string>
#include<vector>
#include<memory> // for smarts pointers
using namespace std;
class Test{
    public :
    int data;
    string name;
    public :
       Test():data{0},name{NULL}
       {
         cout<<"Test()"<<endl;
       }
       Test(int data,string name):data{data},name{name}
       {
          cout<<"Test("<<data<<" "<<name<<")"<<endl;
       }
       ~Test()
       {
         cout<<"Test Destructor()"<<endl;
       }
};
int main()
{
    Test *t1=new Test(1000,"test1");
    delete t1;//we need to delete manually
    unique_ptr<Test> t2{new Test(2000,"test2")};//no manual deletion since it is smart pointers
    unique_ptr<Test> t3=make_unique<Test>(3000,"test3");//another way
    // t3=t1;//throws error instead we can move()
    unique_ptr<Test> t4;
    // t4=move(t1)//error since ,we can move only smart pointer
    t4=move(t2); // move instead copy ,it works fine
    if(!t2) //now since t2 is moved, it will be nullptr
    {
        cout<<"t2 is nullptr"<<endl;
    }
     vector<unique_ptr<Test>> vec;
     vec.push_back(make_unique<Test>(1,"vector one"));
     vec.push_back(make_unique<Test>(2,"vector two"));
     vec.push_back(make_unique<Test>(2,"vector three"));

}
/* unique pointers are created dynamically in heap but without new keyword
so, we dont need to use 'delete' to remove the memory .c++ take care of memory management
2.smart pointers cannot be copied and assigned
3.can be moved
4.dynamic binding
*/