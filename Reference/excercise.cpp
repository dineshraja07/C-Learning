/* Online C++ Compiler and Editor */
#include <iostream>
#include<vector>
using namespace std;
int &func(int &a)
{
    a=12444;
    return a;
}
void changeVector(vector<int> vec)
{
   vec.at(0)=10000;
}
void changeVectorByReference(vector<int> &vec)
{
     vec.at(0)=2000;
}
int main()
{
    int n=10;
    int &ref=func(n);
    cout<<ref<<endl;
    ref=97806;
    cout<<n<<endl;
    vector<int> vec{1,2,3,4,5};
    changeVector(vec);
    cout<<vec.at(0)<<endl;//no change, since vector pass by value
    changeVectorByReference(vec);
    cout<<vec.at(0)<<endl;//it change since vector passed by reference
    return 0;
}