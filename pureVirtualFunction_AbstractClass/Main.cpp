//pure virtual function act as a abstract functions and the class that hold those functions is abtract
//the child classes implements the methods of abstract class functions 


#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Shape{ //abstract class since , it contains the declaration of functions and cannot create object for this class
    public:
    virtual void draw()=0;
    virtual void rotate()=0;
    void nonAbstractClass()
    {
      cout<<"Non abstract class"<<endl;
    }
};
class Triangle :public Shape{ //this is concrete clas since all the members are defined and here we will  create object 
    public:
    virtual void draw()
    {
        cout<<"drawing Triangular shape"<<endl;
    }
    virtual void rotate()
   {
     cout<<"rotating Triangle shape"<<endl;
   }
};
class Circle :public Shape{
    public:
    virtual void draw()
    {
        cout<<"drawing Circle shape"<<endl;
    }
    virtual void rotate()
   {
     cout<<"rotating Circle shape"<<endl;
   }
};
int main()
{
    // Shape s;// error since it is abstract
    Circle c1;//can create object to access the pure virtual methods (abstract methods) by this
    c1.draw();
    Triangle t1;
    t1.rotate();
    Shape *c2=new Circle;
    c2->draw();
    c1.nonAbstractClass();//calling non abstract in abstract class 
}