#include<iostream>
#include<string>
#include<cstring>
#include<cctype>
#include<vector>
using namespace std;
class Mystring{
    private:
     char *str;
     public :
     Mystring();//no args constructor
     Mystring(const char *s);//overloaded constructor
     Mystring(const Mystring &source);//copy constructor
     Mystring(Mystring &&source);//move constructor
     ~Mystring();//destructor
     void display() const;
     int get_length() const;
     const char *get_str() const;
     Mystring &operator=(const Mystring &rhs);//copy assignment
     Mystring &operator=(Mystring &&rhs);//move assignment
     Mystring operator-() const;//make lowercase
     Mystring &operator+(const Mystring &rhs)const;//make uppercase
     bool operator==(const Mystring &rhs) const; //compare
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
Mystring &Mystring::operator=(Mystring &&rhs)
{
    cout<<"using the move assignment"<<endl;
    if(this==&rhs)
    {
        return *this;
    }
    delete [] str;
    str=rhs.str;
    rhs.str=nullptr;
    return *this;
}
//comapre
bool Mystring::operator==(const Mystring &rhs)const
{
    return (strcmp(str,rhs.str)==0);
}
//make lower
Mystring Mystring::operator-()const{
    char *temp=new char[strlen(str)+1]; 
     strcpy(temp,str);
     for(int i=0;i<strlen(str);i++)
     {
        temp[i]=tolower(temp[i]);
     }
     Mystring tempObject{temp};
     delete []temp;
     return tempObject;
}
Mystring &Mystring::operator+(const Mystring &rhs)const{
    char *temp=new char[strlen(str)+1]; 
     strcpy(temp,str);
     strcat(temp,rhs.str);
     Mystring *tempObject = new Mystring{temp};
     return *tempObject;
     //it return reference ,since it is l-value
    //copy assignment will be called
     
}
Mystring::Mystring(Mystring &&source):str(source.str)
{
     cout<<"move constructor and r- value"<<endl;
   source.str=nullptr;

}
Mystring::Mystring():str{nullptr}
{
    cout<<"defualt constructor"<<endl;
   str=new char[1];
   *str='\0';
}
Mystring::Mystring(const char *s):str{nullptr}
{
    cout<<"parameteraized constructor"<<endl;
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
    Mystring a{"hello"};
    Mystring b{"hello"};
    cout<<"compare two string : "<<(a==b)<<endl;
    Mystring a2=-a;
    a2.display();
    Mystring combinedString;
    combinedString=a+b; //copy assignment called since ,a+b return reference which is l-value
    combinedString.display();
    Mystring c="dinesh";
    c=-c;//since -c return temporary object which is r -value the move assigment will be called
    c.display();
    return 0;
    /* 
    1 .any constructor will be called only when , new object is created and initalized with any other object
    2. if one already defined object and assigned with other object then the assighment will be called
    3. r-value -> move in both constructor and 
    4.l-value -> copy
    
    
    
    */

}