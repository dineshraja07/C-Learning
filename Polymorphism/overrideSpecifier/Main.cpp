// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;
// class Base{
//     public:
//   virtual  void hello()const
//     {
//         cout<<"Hello from Base class Object"<<endl;
//     }
//     virtual ~Base()
//      {
//         cout<<"Base class virtual destructor"<<endl;
//      }
// };
// class Derived : public Base{
//     public:
//    virtual void hello() override//here we redefine(const is missing),since definition of virtual function should be exactly same 
//     {
//         cout<<"Hello from Derived class Object"<<endl;
//     }
//     virtual ~Derived()
//     {
//          cout<<"Derived class virtual destructor"<<endl;
//     }
// };
// void greeting(const Base &obj)
// {
//     cout<<"Greeting"<<endl;
//     obj.hello();
// }
// int main()
// {
//     Base b;
//     greeting(b); 
//     Derived d;
//     greeting(d);
//     Base *ptr=new Derived;
// /*above , does not override,since the definition of both virtual method be same 
// but Base class function has const but Derived does not contain const
// so compiler assume that as a definition not as override
// to mark that as override , we use override specifier
//   */
//     greeting(*ptr);
//     return 0;
 
// }