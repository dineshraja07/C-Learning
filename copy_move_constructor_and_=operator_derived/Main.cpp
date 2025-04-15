#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Base{
  

    public:     
     int value;
     Base():value{0}
     {
        cout<<"Base - no args constructor"<<endl;
     }
     Base(int x):value{x}
     {
        cout<<"int Base constructor"<<endl;
     }
     Base(const Base &other):value{other.value}
     {
         cout<<"Base copy constructor"<<endl; 
     }
     Base &operator=(const Base &rhs)
     {
         cout<<"Base operator = "<<endl; 
         if(this==&rhs)
         {
             return *this;
         }
         value=rhs.value;
         return *this;
     }
     ~Base()
     {
        cout<<"base class - Destructor"<<endl;
     }


};
class Derived : public Base{

    public:
            int doubled_value;
    Derived():Base{}
    {
      
        cout<<"Derived - no args constructor"<<endl;
    }
    Derived(int x):Base{x},doubled_value{x*2}
    {
     cout<<"int derived constructor"<<endl;
    }
    Derived(const Derived &other):Base(other),doubled_value{other.doubled_value}
    {
        cout<<"Derived copy constructor"<<endl;
    }
    ~Derived()
    {
        cout<<"Derived class - Destructor"<<endl;
    }
    void display()
    {
        cout<<"doubled value : "<<doubled_value<<endl;
        cout<<"value :"<<value<<endl;
    }
    Derived &operator=(const Derived &rhs)
    {
        cout<<"Derived operator="<<endl;
        if(this==&rhs)
        {
            return *this;
        }
        Base::operator=(rhs); // calling base class assigment operator
        doubled_value=rhs.doubled_value;
        return *this;
    }
};
int main()
{
//    Derived d1(2);
    //here we invoke Derived int constructor and 
    //explictity invoke the Base class constructor inside the Derived class constructor
//    d1.display();
//    Base b{100};
//    Base b1=b;//copy constructor
//    b=b1; //copy assigment , b1 is l-value
     Derived d{100};
     Derived d1{d};
     d=d1;

}