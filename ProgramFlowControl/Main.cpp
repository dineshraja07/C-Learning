#include<iostream>
using namespace std;
int main()
{
     int num;
     cout<<"Enter the number between 55 and 100"<<endl;
     cin>>num;
     if(num>=55 && num<=100)
     {
        cout<<"perfect"<<endl;
     }
     else if(num<55)
     {
        cout<<num<<" is lesser than the range"<<endl;
     }
     else{
        cout<<num<<" is greater than the range"<<endl;
     }

     cout<<"Enter the age of the person"<<endl;
     int age;
     cin>>age;
     if(age>19)
     {
      if(age>25)
      {
         cout<<"masters"<<endl;
      }
      else{
      cout<<"super senior";

      }
     }
      else if(age<=19 && age>16)
      {
         cout<<"senior"<<endl;
      }
      else if(age<17)
      {
          if(age<14)
          {
            cout<<"sub junior"<<endl;
          }
          else{
             cout<<"junior"<<endl;
          }
      }

    

}