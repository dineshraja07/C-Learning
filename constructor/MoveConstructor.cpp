#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Move{
    private:
    int *data;
    public:
    Move(int d)
    {
        data=new int;
        *data=d;
        cout<<" constructor for : "<<d<<endl;
    }
    Move(const Move &source)
    :Move{*source.data}
    {
        cout<<"copy constructor-deep for : "<<*data<<endl;
    }
    Move(Move &&source) noexcept:data{source.data}
    {
        source.data=nullptr;
        cout<<"Move constructor : "<<*data<<endl;
    }
     void setData(int d)
    {
        *data=d;
    }
    int getData()
    {
        return *data;
    }
    // ~Move()
    // {
    //     if(data!=nullptr)
    //     {
    //         cout<<"destructor for : "<<*data<<endl;
    //     }
    //     else{
    //        cout<<"destructor for nullptr"<<endl;
    //     }
    //     delete data;

        
    // }
};
int main()
{
     vector<Move> vec;
     vec.push_back(Move(10));
     /*A move constructor in C++ is a special constructor that transfers resources from a temporary object (rvalue) to a new object, rather than copying them. This is particularly useful for optimizing performance by avoiding unnecessary deep copies,
      especially when dealing with dynamic memory or large data structures.*/
     /*without call the copy again and again for every object
we simply move the address of data from to current object and null out the pointer 
in the source pointer*/
   vec.push_back(Move(20));
     for( Move i: vec)
     {
        cout<<i.getData()<<endl;
     }
    //  vec.push_back(Move(30));

}