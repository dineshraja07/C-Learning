#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
    ifstream file;//define type
    string line{};
    file.open("C:\\Users\\raja-7\\C++practices\\streams\\fileStream\\poem.txt");
    cout<<boolalpha;
    cout<<(!file)<<endl;
    if(!file)
    {
        cout<<"open file operation - failed"<<endl;
        return 0;
    }
    while(getline(file,line))//read by line
    {
        cout<<line<<endl;
    }
    char ch{};
    while(file.get(ch))
    {
        cout<<ch<<" - ";
    }
    cout<<endl;
    
}