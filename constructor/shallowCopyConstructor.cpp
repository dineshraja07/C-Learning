#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Player
{
    public:
    int *data;
    public:
    int getData()
    {
        return *data;
    }
    void setData(int d)
    {
      *data=d;
    }
    Player(int d)
    {
        data=new int;
        *data=d;
        // value(1000)=2000;
        //address of d 1000
        //address of data 2000
    }
    Player(Player &p)
    {
        data=p.data;
        //1000=1000;
    }
    void display(Player p)
    {
        cout<<p.getData()<<endl;
    } 
    ~Player()
    {
        delete data;
        cout<<"destructor called"<<endl;
    }
};
int main()
{
 Player p1(1000);
 p1.display(p1);
 Player p2(p1);
 p2.setData(2000);
cout<<p1.data<<endl;
 cout<<p2.data<<endl;
}