#include<iostream>
#include<string>
using namespace std;
class Players 
{
    private:
    string name;
    int ranking;
   static int count;
    public :
    Players(string name,int ranking)
    {
      this->name=name;
      this->ranking=ranking;
     increment();
    }
   static void increment()
    {
        count++;
    }
    int getCount()
    {
        return count;
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
     void displayDetails() ;
     

};
int Players::count=0;
void Players::displayDetails()
{
        cout<<"name : "<<Players::getName()<<endl;
        cout<<"ranking : "<<Players::getRanking()<<endl;
}
//static variables must be defined and initialized outside the class definition.
//Static functions belong to the class rather than any object instance. They can only access static variables and other static functions.
//no direct static class concept in class
int main()
{
     Players ronaldo("ronaldo",1); //count=1
        cout<<ronaldo.getCount()<<endl;
     Players messi("messi",2); //count=2
     messi.increment();//count=3 messi can access but not appreciable
     Players::increment(); //count=4
     cout<<messi.getCount()<<endl;
     messi.displayDetails();
     
     
     

}