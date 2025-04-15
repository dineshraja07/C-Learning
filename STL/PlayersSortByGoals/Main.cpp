#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Players
{
   string name;
   int goals;
   public:
   Players(string name,int goals):name{name},goals{goals}
   {
      
   }
    // Players(const Players &p)
    // {
    //    cout<<"copy constructor called for : "<<p.name<<endl;
    //    this->goals=p.goals;
    //    this->name=p.name;
    // }
    int getGoals()
    {
        return goals;
    }
    string getName()
    {
        return name;
    }
    bool operator<( Players &rhs)
    {
        return this->getGoals() < rhs.getGoals();
    }
       bool operator==( Players &rhs)
    {
        return this->getGoals() == rhs.getGoals();
    }

 
};
int main()
{
    vector<Players> vec{};
    vec.push_back(Players{"halaand",100});
    vec.push_back(Players{"ronaldo",915});
    Players messi{"messi",835};
    vec.push_back(messi);//this calls copy constructor
    sort(vec.begin(),vec.end());
    for(auto p:vec)
    {
        cout<<"name : "<<p.getName()<<endl;
        cout<<"Number of Goals : "<<p.getGoals()<<endl;
    }
    vec.insert(vec.begin(),Players{"benzema",150});
    cout<<"==========================================="<<endl;
       for(auto p:vec)
    {
        cout<<"name : "<<p.getName()<<endl;
        cout<<"Number of Goals : "<<p.getGoals()<<endl;
    }
    cout<<boolalpha;
    vec.erase(vec.begin()+2);
     cout<<"==========================================="<<endl;
       for(auto p:vec)
    {
        cout<<"name : "<<p.getName()<<endl;
        cout<<"Number of Goals : "<<p.getGoals()<<endl;
    }
}