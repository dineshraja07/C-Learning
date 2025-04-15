#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Base { 
    public:
 virtual void hello()const  
    {
        cout<<"Hello from Base class Object"<<endl;
    }
};
class Derived : public Base{
    public:
 virtual void  hello() const
    {
        cout<<"Hello from Derived class Object"<<endl;
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
    Base &ref=d; //dynamic binding using virtual
    greeting(ref);
    ref.hello();

    return 0;
 
}