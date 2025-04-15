#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
int main()
{
    ifstream input_file;
    ofstream output_file;
    string inputFilePath="C:\\Users\\raja-7\\C++practices\\streams\\fileStream\\poem.txt";
    string outputFilePath="C:\\Users\\raja-7\\C++practices\\streams\\fileStream\\writing.txt";
    input_file.open(inputFilePath);
    output_file.open(outputFilePath,ios::app);
    if(!input_file)
    {
        cerr<<"error - opening poem.txt"<<endl;
        return 0;
    }
    if(!output_file)
    {
        cerr<<"error - opening writing.txt"<<endl;
       return 0;
    }
    string line{""};
    while(!input_file.eof())
    {
       getline(input_file,line);//read
       output_file<<line<<endl;;//write
    }
}