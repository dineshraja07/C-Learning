#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Player
{
    public:
    string name;
    int number;
    public:
    Player(string n,int num)
    {
        name=n;
        number=num;
    }
    Player(Player &p)
    {
       name=p.name;
       number=p.number;
       cout<<"copy constructor called"<<endl;
    }
    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Number : "<<number<<endl;
    }
    ~Player()
    {
        cout<<"destructor called"<<endl;
    }
};
int main()
{
   Player p1("dinesh",7);
   Player p2(p1);// it calls copy constructor
   p2.display();
   Player p3=p1; //calls copy constructor
   Player p4("raja",3);
   p4=p1;/* here no copy constructor called since p4 is already difined,so default assigment 
   overloading takes place */
   p4.display();

}