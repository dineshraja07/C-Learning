#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Base{
    
    public:
    int a=0;
    void display()
    {
        cout<<a<<" , "<<b<<" , "<<c<<endl;
    }
    protected:
    int b=0;
    private:
    int c=0;
};
class Derived:public Base
{
  //a is public 
  //b is protected
  //c is not accessable
  public:
  void access_base_member()
  {
     cout<<a<<endl;// OK
     cout<<b<<endl;//OK since protected members accessable in inherited class
     cout<<c<<endl;//error
  }
};
int main()
{
  Base base;
  base.a=100;//OK
//   base.b=200;//error 
//   base.c=300;//error
  Derived derived;
  derived.a=400;//OK
  derived.b=200;//error
  derived.c=//error
  derived.display();
}