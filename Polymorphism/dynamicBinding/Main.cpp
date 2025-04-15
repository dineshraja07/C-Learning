#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Base{
    public:
  virtual  void hello()const
    {
        cout<<"Hello from Base class Object"<<endl;
    }
    virtual ~Base()
     {
        cout<<"Base class virtual destructor"<<endl;
     }
};
class Derived : public Base{
    public:
   virtual void hello()const
    {
        cout<<"Hello from Derived class Object"<<endl;
    }
    virtual ~Derived()
    {
         cout<<"Derived class virtual destructor"<<endl;
    }
};
void greeting(const Base &obj)
{
    cout<<"Greeting"<<endl;
    obj.hello();
}
int main()
{
    Base b;
    greeting(b); 
    Derived d;
    greeting(d);
    Base *ptr=new Derived;
   /*virtual enables to override ,so derived class hello() will be called */
    greeting(*ptr);
    delete ptr;
/*this delete cause error due to virtual function ,so we need virtual destructor to do this*/
    return 0;
 
}