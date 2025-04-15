#include<iostream>
#include<string>
#include<vector>
#include<iomanip>//must included
using namespace std;
int main()
{
    cout<<(10==10)<<endl;//output : 1

    cout<<boolalpha;//set boolalpha (true/false)
    cout<<(10==10)<<endl;//output //true

    cout<<noboolalpha;//set no boolalpha(true/false);
    cout<<(10==10)<<endl;

    cout.setf(ios::boolalpha);//using set methods
    cout<<(10==10)<<endl;
    cout<<resetiosflags(ios::boolalpha);//reset the boolalpha

}