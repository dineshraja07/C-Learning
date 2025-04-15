#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Player
{
    private:
      int ranking;
      string name;
    public :
    int jersey;
    Player()
    {
        cout<<"no argument constructor"<<endl;
    }
    Player(string n,int r,int j):ranking{r},name{n},jersey{j}
    {
        cout<<"argument constructor"<<endl;
    }
    void display()
    {
        cout<<"name : "<<name<<endl;
        cout<<"ranking : "<<ranking<<endl;
        cout<<"jersey no : "<<jersey<<endl;
    }
};
void displayDetails(Player player)//it is copy of the object p in main
{
   player.display();
    cout<<&player<<endl; // it outputs the address of the copy object = player
    //so, address of player and address p in main differs;
    player.jersey=10;//does not change the value
}
void displayDetailsByReference(Player &player)// this player refers p in main
{
   player.jersey=1124;//it can change the value
   cout<<&player<<endl; //&player output the address of p object in main
}
Player createPlayer()
{
    Player player("messi",2,10);
    return player;
}
int main()
{
    Player p("dinesh",1,7);
    displayDetails(p);
    p.display();
    displayDetailsByReference(p);
    p.display();
    Player messi=createPlayer();
    messi.display();
    displayDetailsByReference(messi);
    messi.display();

}