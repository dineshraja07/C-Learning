#include<iostream>
#include<string>
#include<vector>
using namespace std;
int My_divider(int num,int div)
{
   if(div==0)
   {
     throw 0;
   }
   if(num<0){
    throw string{"num is negative"};
   }
   return num/div;
}

int main()
{
    int num=10;
    int div=0;
    try{

        int result=My_divider(num,div);//throw from function 
        int result1=My_divider(-78,1);//throw from function
        cout<<result1<<endl;
    }
    catch(int &ex)  //it catch throw 0
    {
        cout<<"error divide by "<<ex<<endl;
    }
    catch(string &ex) //it catch throw string
    {
        cout<<ex<<endl;
    }
    catch(...) //catch any type of exception
    {
        cout<<"exception throwed"<<endl;
    }
 
     cout<<"byebyebye"<<endl;
     return 0;
}