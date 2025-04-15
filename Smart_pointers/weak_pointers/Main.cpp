#include<iostream>
#include<string>
#include<vector>
#include<memory>
using namespace std;
class B;//forward delcaration
class A{
    shared_ptr<B> b_ptr;
    public :
    void set_B(shared_ptr<B> &b)
    {
        b_ptr=b;
    }
    A(){cout<<"A construcor"<<endl;};
    ~A(){cout<<"A destructor"<<endl;};
};
class B{
    // shared_ptr<A> a_ptr;//make it weak
    weak_ptr<A> a_ptr;//weak pointer
    public:
    void set_A(shared_ptr<A> &a)
    {
        a_ptr=a;
    }
      B(){cout<<"B construcor"<<endl;};
    ~B(){cout<<"B destructor"<<endl;};
};
void my_deletor(A *a)
{   
    //here write anything you want to do like delete the raw pointer
    cout<<"using my custom function deletor"<<endl;
    delete a;
}
int main()
{
   shared_ptr<A> a=make_shared<A>();
   shared_ptr<B> b=make_shared<B>();
//a refers A() in heap
//b refers B() in heap
   a->set_B(b);
   b->set_A(a);
   cout<<a.use_count()<<endl;
 //a refers to b and b refer to a
 //so, no destructors is called since its stuck
 //after making a_ptr =weak,then that lock get broken and destructors will be called 
  
  shared_ptr<A> a1{new A(),my_deletor};
  //it does not call destructor out of scope instead it calls my_deletor
 //custom_deletor is used to do some additional  more than just delete object 
}