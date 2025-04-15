#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
/*it has functions like,
list.sort(list.begin(),list.end()) , count(),list.fill(),  min_element(),max_element,
list1.swap(list2);   list.front(),back(),size(), copy(). , find(begin,end,key)
any sequence containers(like array,list,vector ) can use these algorithms methods
*/
#include<cctype>
#include<list>
using namespace std;
class Person{
    string name;
    int age;
    public:
      Person(string str,int age):name{str},age{age}
      {

      }
      string getName()
      {
        return name;
      }
      int getAge()
      {
        return age;
      }
      bool operator<(const Person &rhs)const{
         return this->age < rhs.age;
      }
      bool operator==(const Person &rhs)const
      {
         return (this->name==rhs.name && this->age==rhs.age);
      }
};
int main()
{
    list<Person> playersList{};
    Person p1{"dinesh",21};
    Person p2{"rajesh",20};
    playersList.push_back(p1);
    playersList.push_back(p2);
    cout<<boolalpha;
    cout<<(p1<p2)<<endl;//it will work since , < operator overloaded
    auto it=playersList.begin();// it=0
    cout<<(*it).getName()<<endl;// dinesh 
    auto loc=find(playersList.begin(),playersList.end(),Person{"dinesh",21});
    if(loc!=playersList.end())
    {
        cout<<"founded "<<(*loc).getName()<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

}