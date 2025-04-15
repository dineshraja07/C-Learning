#include<iostream>
#include<string>
#include<cstring>
#include<vector>
using namespace std;
class Mystring{
    private:
     char *str;
     public :
     Mystring();//no args constructor
     Mystring(const char *s);//overloaded constructor
     Mystring(const Mystring &source);//copy constructor
     ~Mystring();//destructor
     void display() const;
     int get_length() const;
     const char *get_str() const;
     Mystring &operator=(const Mystring &rhs);//copy assignment
};
Mystring &Mystring::operator=(const Mystring &rhs)
{
    cout<<"Copy assignment" <<endl;
    if(this==&rhs)
    {
        return *this;
    } 
    delete [] this->str;
    str=new char[strlen(rhs.str)+1];
    strcpy(str,rhs.str);
    return *this;


}
Mystring::Mystring():str{nullptr}
{
   str=new char[1];
   *str='\0';
}
Mystring::Mystring(const char *s):str{nullptr}
{
   if(s==nullptr)
   {
     str= new char[1];
     *str='\0';
   }
   else{
    str=new char[strlen(s)+1];
    strcpy(str,s);
   }
}
Mystring::Mystring(const Mystring &source):str{nullptr}
{
    cout<<"copy constructor called"<<endl;
   str=new char[strlen(source.str)+1];
   strcpy(str,source.str);
}
Mystring::~Mystring()
{
    delete [] str;
}
void Mystring::display() const{
    cout<<get_str()<<" : "<<get_length()<<endl;
}
int Mystring ::get_length() const
{
    return strlen(str);
}
const char *Mystring::get_str()const{
    return str;
}
int main()
{  
    Mystring a{"hello"};//a("hello") 
    Mystring b;
    b=a;/*it is assign the already defined a = object
 , so due to temperary object, it calls copy or  copy assignment   */      
     a.display();
    b.display();
    b="this is a test";//b.operator=("thisisatesty")
    b.display();
    a.display();
//    Mystring empty;
//    Mystring harry("harry");
//    Mystring potter(harry);
//    empty.display();
//    harry.display();
//    potter.display();
//   cout<<"length of string : "<< potter.get_length()<<endl;
    return 0;

}