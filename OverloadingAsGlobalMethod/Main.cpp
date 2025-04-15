#include<iostream>
#include<string>
#include<cstring>
#include<cctype>
#include<vector>
using namespace std;
//friend functions can access class private members
class Mystring{
      friend bool operator==(const Mystring &lhs,const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs,const Mystring &rhs);
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

Mystring::Mystring(Mystring &&source):str(source.str)
{
    cout<<"r-value consrtructor"<<endl;
   source.str=nullptr;

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
//compare =
bool operator==(const Mystring &lhs,const Mystring &rhs)
{
    return(strcmp(lhs.str,rhs.str)==0);
}
//make lowercase
Mystring operator-(const Mystring &obj)
{
    char *buff=new char[strlen(obj.str)+1];
    strcpy(buff,obj.str);
    for(int i=0;i<strlen(obj.str);i++)
    {
        buff[i]=tolower(buff[i]);
    }
    Mystring temp{buff};
    delete [] buff;
    return temp;

}
Mystring operator+(const Mystring &lhs,const Mystring &rhs)
{
    char *buff=new char[strlen(lhs.str)+strlen(rhs.str)+1];
    strcpy(buff,lhs.str);
    strcat(buff,rhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}
bool operator<(const Mystring &lhs,const Mystring &rhs)
{
     return(strcmp(lhs.get_str(),rhs.get_str())<0);
}
bool operator<=(const Mystring &lhs,const Mystring &rhs)
{
     return(strcmp(lhs.get_str(),rhs.get_str())<0) && (strcmp(lhs.get_str(),rhs.get_str())==0);
}
int main()
{  
    Mystring a{"hello"};
    Mystring b{"hello"};
    cout<<"compare two string : "<<(a==b)<<endl;
    Mystring a2=-a;
    a2.display();
    Mystring combinedString=a+b;
    combinedString.display();
    cout<<"str1 < str2 : "<<(combinedString<a2)<<endl;
    cout<<"str1 <=str2 : "<<(a<=b)<<endl;
    return 0;

}