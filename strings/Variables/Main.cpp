#include<iostream>
#include<climits>
#include<cfloat>
#define college "sri ramakrishna engineering college" 
using namespace std;
int main()
{
   int rollnumber;
   double totalmark;
   char name[1000];
   bool isContinue=true; 
   char flag;
   while(isContinue){
   cout<<"Enter the rollnumber"<<endl;
   cin>>rollnumber;
   cout<<"Enter the name"<<endl;
   cin>>name;
   cout<<"ente the totalmark"<<endl;
   cin>>totalmark;
   cout<<"student name : "<<name<<endl;
   cout<<"student rollnumber : "<<rollnumber<<endl;
   cout<<"student college : "<<college<<endl;
   cout<<"student totalmark : "<<totalmark<<endl;

   cout<<"want to continue (y or n) ?"<<endl;
   cin>>flag;
   if(flag=='y')
   {
      isContinue=true;
   }
   else{
    isContinue=false;
    cout<<isContinue<<endl; // will output 0 since false
   }
   }

   return 0;
   
 
   

}