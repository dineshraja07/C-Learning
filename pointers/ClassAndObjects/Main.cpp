#include<iostream>
#include<string>
#include<vector>
using namespace std;
// default access specifier is private
struct Coach
   {
     string name="zidane";
      int score=10;
      public:
      void getDetails()
      {
            cout<<" [ "<<name<<" "<<score<<" ]"<<endl;
      }
   };
class Player
{
   string name;
   int score;
   Coach coach; 
   public :
 
    Player(string name,int score,Coach c):name{name},score{score},coach{c}
    {
        
    }
     void details()
    {
     cout<<" [ "<<name<<" "<<score<<" ]"<<endl;
    }
    Coach getCoach()
    {
       return coach;
    }
  
   

};

int main()
{
   Coach c;
   Player player1{"raina",100,c};// stack object allocation 
   // Player player2{};
   // it is limited to the scope 
   //faster performance and no need to use delete ,system will handle it
//    playeSr1.details();
   // Player *player3=new Player;
 //heap allocation,live entire scope and slower , delete using delete method
//    player3->details();
   // Player arr[]={player1,player2};
   // vector<Player> vec={player{"dhoni",1000},player{"virat",50000}};
   // vec.at(0).details();
   Player players3{"dhawan",6000,c};
   players3.details();
   players3.getCoach().getDetails();
}