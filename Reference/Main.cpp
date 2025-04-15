#include<iostream>
#include<string>
#include<vector>
using namespace std;
void add(int &a)
{
   a=2125;
}
int &fun()
{
    static int x=10;
    return x;
}

int main()
{
    int num=10;
    add(num);
    cout<<num<<endl;
    vector<string> vec={"cr7","modric","pepe"};
//     for(string &str:vec)
//     {
//         str="dinesh";
//     }
//    for(string str:vec)
//    {
        
//        cout<<str<<endl;
//    } 

cout<<"x : "<<fun()<<endl;
return 0;
}