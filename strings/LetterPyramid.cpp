#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int i,j;
    for(int index=0;index<str.length();index++)
    {
    for( i=0;i<index;i++)
    {
       cout<<str.at(i);
    }
    for( j=i;j>=0;j--)
    {
        cout<<str.at(j);
    }
    cout<<endl;
    }
}