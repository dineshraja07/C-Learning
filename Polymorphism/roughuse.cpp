#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Parent{
    public:
    string name="parent";
    void display()
    {
        cout<<name<<endl;
    }
    void info()
    {
           cout<<name<<endl;
    }
};
class child:public Parent{
    public:
    string name="child;";
     void print()
    {
        cout<<name<<endl;
    }
};
int main()
{
    Parent *c=new child();

    cout<<c->name;
    // c->print(); //error , since members called based on reference , Not on object type
      c->info();
}