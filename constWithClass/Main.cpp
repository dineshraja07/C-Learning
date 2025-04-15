#include<iostream>
#include<string>
using namespace std;
class Players 
{
    private:
    string name;
    int ranking;
    public :
    Players(string name,int ranking)
    {
      this->name=name;
      this->ranking=ranking;
    }
    int getRanking()
    {
        return ranking;
    }
     string getName()
     {
        return name;
     }
     void setName(string name)
     {
        this->name=name;
     }
     void displayDetails() const // indicate this method will never change the object
     {
        cout<<"name : "<<name<<endl;
        cout<<"ranking : "<<ranking<<endl;

     }
};
int main()
{
    const Players ronaldo("ronaldo",1);
    ronaldo.displayDetails();
    ronaldo.setName("cr7");// due to const
}