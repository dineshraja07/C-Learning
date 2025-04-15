#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
int main()
{
    ifstream in_file;
    string line;
    int num;
    double total;
    in_file.open("C:\\Users\\raja-7\\C++practices\\streams\\test.txt");
    if(!in_file)
    {
        cerr<<"error opening file"<<endl;
        return 0;
    }
    
    // cout<<"file is good"<<endl;
    // in_file>>line>>num>>total;
    // cout << line << endl;
    // cout<<total<<endl;
    // cout<<num<<endl;

    while(!in_file.eof())//eof() end of file
    {
        in_file>>line>>num>>total;
        cout << line << endl;
        cout<<total<<endl;
        cout<<num<<endl;
    }
  in_file.close();
    
    return 0;
/* 
  open with mode :
    ios::app //append
    ios::in //read only
    ios::out //write only
    ios::trunc // clear content and open
    
*/
}