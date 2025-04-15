#include<iostream>
using namespace std;
string printString(string);
void swap(int *a,int *b)
{
     int temp=*a;
     *a=*b;
     *b=temp;
}
// default parameter are available in c++ but not in c and java
void printArr(int *arr,int len=5)
{
  cout<<"print the elements of array"<<endl;
  for(int i=0;i<len;i++)
  {
     cout<<arr[i]<<" - > ";
  }
  cout<<endl;
}
int* createArr()
{
    static int arr[10];
    cout<<"array created"<<endl;
    return arr;
} 
void addElement(int *arr,int len)
{
     for(int i=0;i<len;i++)
     {
        cin>>arr[i];
     }
     cout<<"added element"<<endl;
}
int My_multiplier(int m,int n)
{
   return m*n;
}
int add(int a,int b)
{
    return a+b;
}
int main()
{
   // int arr[]={1,2,3,4,5};
   //  printArr(arr,5); 
   //  //arr contains address of first element 
   //  /*vector are pass by value 
   //   changes happen in function will not affect the
   //  actual vector in main but in java it get effected because list is an object
   //  in java  */

   // int *arr2=createArr();
   // addElement(arr2,5);
   // printArr(arr2);
   // cout<<printString("hello dinesh")<<endl;
   // cout<<"Enter the two numbers with space"<<endl;
   // int number1,number2;
   // cin>>number1>>number2;
   // cout<<"Before swapping of two numbers : "<<number1<<" "<<number2<<endl;
   // swap(&number1,&number2);
   //   cout<<"after swapping of two numbers : "<<number1<<" "<<number2<<endl;
   cout<<My_multiplier(add(1,2),add(1,2))<<endl;
}
string printString(string str)
{
    return "the passed string is : "+str;
}
