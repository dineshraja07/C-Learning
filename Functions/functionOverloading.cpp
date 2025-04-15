#include<iostream>
#include<vector>
using namespace std;
void add(int a,int b)
{
    cout<<a+b<<endl;
}
void add(int a,int b,int c)
{
    cout<<a+b+c<<endl;
}
void add(vector<int> vec)
{
    int sum=0;
     for(int i:vec)
     {
         sum+=i;
     }
     cout<<"sum of all values of vector : "<<sum<<endl;
}
void add(int *a)
{
    *a=(*a)+1000;
}
void add(int &a)
{
    a=a+20000;
}
int main()
{
  vector<int> vec={1,3,4,5,8,7,6,3};
   add(1,2);
   add(10,23,45);
   add(vec);
   /* pass by reference done by two methods 
   1. pointers 
   2.reference
  */
 int number=1;
   add(&number); 
   cout<<number<<endl;
   // pointers can be reassinged with another variable 
   //reference cannot be ressigned
   add(number);
   cout<<number<<endl;

 int variable=1000;
 {
    int variable=2999;
    // no problem occurs though we declare name variable twice
   // shows error in java
    cout<<variable;
 }
   return 0;
}