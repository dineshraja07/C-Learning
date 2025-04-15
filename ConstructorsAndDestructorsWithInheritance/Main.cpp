#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Base{
    private:
     int value;
    public:
     Base()
     {
        cout<<"Base - no args constructor"<<endl;
     }
     Base(int value)
     {
        this->value=value;
     }
     ~Base()
     {
        cout<<"base class - Destructor"<<endl;
     }

};
class Derived : public Base{
    private:
    int doubled_value;
    public:
    Derived()
    {
        Base();
        doubled_value=0;
        cout<<"Derived - no args constructor"<<endl;
    }
    Derived(int doubled_value):Base{doubled_value}
    {
       doubled_value=doubled_value*2;
       cout<<doubled_value<<endl;
    }
    ~Derived()
    {
        cout<<"Derived class - Destructor"<<endl;
    }
};
int main()
{
    Derived d1(2);
    

}