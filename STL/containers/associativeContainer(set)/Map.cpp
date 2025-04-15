#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<fstream>
#include<sstream>
/*
1. map is (key,value) pair
2. access using key
3.erase using key
4.mutable 
5.no duplicate keys
6.sorted based on key
*/
using namespace std;
int main()
{   
    map<string,string> map{{"18","virat"}};
    pair<string,string> p1{"7","Dhoni"};
    map.insert(p1); //append
    map.insert(make_pair("45","rohit"));//append
    map["8"]="jadeja";// append
    map["7"]="Mehandra singh dhoni";//update value using key 
    map.at("18")="virat kohli";//update value using key
    map.erase("45");//remove using key
    int num=map.count("7");//return 1
      for(auto element:map)
    {
              cout<<"[ "<<element.first<<" : "<<element.second<<" ]"<<endl;
    }
    //  map.clear();//remove all element
    //  map.find()
  



//read from file and add to the map
    ifstream input_file;
    input_file.open("C:\\Users\\raja-7\\C++practices\\STL\\containers\\associativeContainer(set)\\output.txt",ios::app);
    if(!input_file)
    {
        cout<<"error opening file_1"<<endl;
        return 0;
    }
        cout<<"file_1 opened "<<endl;
     string str;
     while(!input_file.eof())
     {
  
        getline(input_file,str);
       stringstream ss(str);
       string temp;
       int flag=0;
       string key;
        input_file>>key>>temp;
        map[key]=temp;
      
     }
     cout<<"\n=============================="<<endl;
  for(auto element:map)
    {
              cout<<"[ "<<element.first<<" : "<<element.second<<" ]"<<endl;
    }
   
   
//write the map into file
   ofstream outputFile;
   outputFile.open("C:\\Users\\raja-7\\C++practices\\STL\\containers\\associativeContainer(set)\\output.txt",ios::app);
    if(!outputFile)
    {
        cout<<"error opening file_2"<<endl;
        return 0;
    }
        cout<<"file_2 opened "<<endl;
    string output_string;
    for(auto element:map)
    {
       outputFile<<element.first<<" "<<element.second<<endl;
    }

 
}