#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Player{
    private:
    int no=7;
    string name="cristiano";
    public:
    Player():Player{"None ",0}//delegate construtor
    {
        cout<<"constructor invoked"<<endl;
    }
    /*constructor initialization list 
    Player():name{"None"},no{0} */
    Player(string str,int n)
    {
        name=str;
        no=n;
        cout<<"constructor from : "<<str<<endl;
    }
    ~Player()//destructor is called
    {
        cout<<"object goes out of scope"<<endl;
    }
    /* destructor is called automaticaly when the 
    object goes out of scope .
for static object creation ,compiler create default destructor automaticcaly
    */

    void display()
    {
        cout<<name<<" : "<<no<<endl;
    }
};
int main()
{
     Player p; 
     Player p1("messi",10);//overloading constructor
     p.display();
     p1.display();
/*but when we create dynamic pointer object
then, we need to create the destructor and delete the object */
}