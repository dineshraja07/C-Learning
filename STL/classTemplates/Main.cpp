#include<iostream>
#include<string>
#include<vector>
using namespace std;
template<typename T>
class Item{
    string name;
    T value;
    public:
    Item(string name,T value):name{name},value{value}
    {

    }
    string getName()
    {
        return name;
    }
    T getValue()
    {
        return value;
    }
};
template <typename T1,typename T2>
struct My_pair{
    T1 first;
    T2 second;
};
int main()
{
    Item<int> item1{"djokovic",1};// T =1
    cout<<item1.getName()<<endl;

    cout<<"================================"<<endl;
    vector<Item<double>> vec{};
    vec.push_back(Item<double>{"ponting",134});
    vec.push_back(Item<double>{"hussy",456});
    vec.push_back(Item<double>{"mcgrath",234});
    for(auto item:vec)
    {
        cout<<"player name :"<<item.getName()<<endl;
        cout<<"Test runs :"<<item.getValue()<<endl;
    } 
    cout<<"==============================="<<endl;
    My_pair<string,int> p1{"frank",100};
    My_pair<int,double> p2{123,12.45};
}