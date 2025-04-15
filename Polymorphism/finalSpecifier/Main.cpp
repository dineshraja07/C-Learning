#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Base final{ //here we define with 'final' , so this class cannot be inherited
    public:
  virtual  void hello()const final   //due to 'final' , this function cannot be overriden
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

    return 0;
 
}