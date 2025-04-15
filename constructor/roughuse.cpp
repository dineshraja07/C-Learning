#include<iostream>
#include<string>
#include<vector>
using namespace std;
class myclass{
    private :
    int *data;
    public :
    myclass()
    {
        cout<<"Default"<<endl;
    }
    myclass(int d)
    { 
        cout << "Constuctor\n";
        data=new int;
        *data=d;
    }
    myclass(myclass &obj)
    {
        cout<<"copy constructor"<<endl;
        data=nullptr;
        data=new int;
        *data=*(obj.data);
    }
  
   void display()
    {
        cout<<"data address : "<<data<<" data value : "<<*data<<endl;
    }
};

void disp(myclass obj) // here it calls copy constructor since it is pass by value object
{
    cout<<"inside disp"<<endl;
}
int main()  
{
    myclass obj1(1000);
    // disp(obj1);//calls copy constructor
    /*in the disp function , we send the obj1 in the function disp(),in that function ,(myclass obj) in this parameter ,we actualyy assign
    obj=obj1 so, here copy constructor called for assign the actual object to formal parameter, due to this temperary object is created then 
    assigned to formal parameter object*/
    myclass obj2(obj1);//calls copy constructor,since obj2 is not already defined
    myclass obj3{3000};
   myclass obj4=obj3; // this  call copy constructor
   myclass obj5; //default constructor
   obj5=obj4; // default assigment called 
    /* the compiler automatically create shallow copy 
    contructor */
   
    /*due to shallow copy , data pointer in both obj1 
    and obj2 will point same address in heap
    */
   /* in this scenerio , we do deep copy as we 
   create seperate memory for every object and assign
   the data value
   */
}
