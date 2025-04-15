#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
int main()
{
    ofstream file;
    string filePath="C:\\Users\\raja-7\\C++practices\\streams\\fileStream\\writing.txt";
    // file.open(filePath);//if no file,it create automatically
    file.open(filePath,ios::app); //app - flag means append at the end of file
    if(!file)
    {
        cerr<<"error opening"<<endl;
        return 0;
    }
    string name;
    cout<<"Enter the info to insert into file "<<endl;
    getline(cin,name);
    file<<name;//write operation
    file.close();
    
}