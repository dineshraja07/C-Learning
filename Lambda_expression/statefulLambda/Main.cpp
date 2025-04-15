#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Person
{
   friend ostream&operator<<(ostream &os,const Person &rhs);
   private:
     string name;
     int age;
     public :
     Person(string name,int age):name{name},age{age}{};
     Person(const Person &p):name{p.name},age{p.age}{};
     string get_name()const{return name;};
     void set_name(string name){this->name=name;}
     int get_age(){return age;};
     void set_age(int age){this->age=age;}
//in this case , all below three capture the members by reference
    auto change_person1(){return [this](string n,int a){name=n;age=a;};}; //preferable
    auto change_person2(){return [=](string n,int a){name=n;age=a;};};
    auto change_person3(){return [&](string n,int a){name=n;age=a;};};

 
};
ostream &operator<<(ostream &os,const Person &rhs)
{
    os<<"[ Person : "<<rhs.name<<" , Age: "<<rhs.age<<" ]"<<endl;
    return os;
}
void test()
{
    Person p{"dinesh",21};
     auto l=p.change_person1();
     l("Ganesh",22);
     cout<<p<<endl;// [Ganesh 22]
}

int main()
{
    test();

}