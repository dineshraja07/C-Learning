#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector<int> vec{1,2,3,4,5,1000};
    auto it=vec.begin();
    cout<<"1st element : "<<*it<<endl;
    it=it+2;
    cout<<"3th element : "<<*it<<endl;
    // cout<<*(vec.end())<<endl;
    vec.erase(5); //in set and map only , we can erase using keys ,other cases , we use iterator
    while(it!=vec.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
    it--;
    it--;
    cout<<*it<<endl;

   
}