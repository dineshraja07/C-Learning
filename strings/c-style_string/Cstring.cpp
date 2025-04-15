#include <iostream>
#include <string>
using namespace std;
// string is dynammic meanwhile c-styled string is static
// can be modified unlike string in java
/*  at(),length(),replace(),erase(),append(),insert(),compare(),substr(),find()
getline(cin,string),
*/
int main()
{
    string name = "dinesh";
    cout << name << endl;
    // concatenate using '+'
    name = name + "raja";
    cout << name << endl;
    name = name + 'R';
    name.append("Raja");
    name.insert(10,"menaga");
    cout << name << endl;
    string lastname = "dineshrajaRraja";
    //comparing with ==,....
    // ==,<,>,!= can be used with strings unlike in java ,cannot use these
    string result = (name > lastname) ? "true" : "false";
    cout << result << endl;
    //access using 
    cout<<name.at(2)<<endl;
    cout<<name[2]<<endl;
    //modify
    name.at(2)='N';
    name[3]='N';
    // replace(startIndex,endIndex) similar to java but parameters will be indexs 
    lastname.replace(0,6,"DINESH");
    cout<<"replace dinesh with DINESH : "<< lastname<<endl;
    // substring
    cout<<name.substr(0,2)<<endl;
    // searching 
    // .find() is similar to indexOf() in java
    cout<<lastname.find("raja")<<endl; // output index
    cout<<lastname.find('R')<<endl;
    cout<<lastname.find('raja',10)<<endl;// check after the index 10
    //remove string
    //similar to sb.delete(start,end)
    lastname.erase(0,3);
        cout<<lastname<<endl;
    //length()
    cout<<"length of lastname : "<<lastname.length()<<endl;
   //get user input
   string collegename;
   cout<<"enter the college name without space"<<endl;
   cin>>collegename; // similar to next() takes untill " "
   cout<<"The college name is : "<<collegename<<endl;
   string collegename1;
  cout<<"enter the college name with space"<<endl;
  getline(cin,collegename1);
  cout<<collegename1<<endl;

    return 0;
}