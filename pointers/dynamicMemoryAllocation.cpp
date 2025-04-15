#include<iostream>
#include<vector>
using namespace std;
int main()
{
   int *ptr=NULL;
   ptr=new int; //similar to malloc() in c dynamic allocation , allocate storage in heap at runtime
   cout<<"address of ptr : "<<ptr<<endl;
   cout<<"value of ptr : "<<*ptr<<endl; //garbage value;
   *ptr=100;
   cout<<"value of ptr : "<<*ptr<<endl;
   delete ptr; //should de-allocate the memory manually free()
   cout<<ptr<<endl;
   int *arr=new int[10];
   arr[0]=1000;
   cout<<"dynamic arr 0th value : "<<arr[0]<<endl;
   //stored in heap and size defined in runtime and live whole process
   int size;
//    cin>>size;
//    int arr2[size];
   // stored in stack so, size defined in compile time and live till scope
   // in java , always heap allocation
   delete[] arr;
   cout<<"access arr 0th value after delete arr : "<<arr[0]<<endl;
   // it might work unproperly sometimes
// arithmetic operation in pointers 
int numbers[]={1,2,3,4,5};
 cout<<*(numbers+3)<<endl; // access by offset
 cout<<(numbers+2)-numbers<<endl;
 int value1=7;
 int *value_ptr=&value1;
 if(value_ptr==(&value1))
 {
    cout<<"both refering same memory"<<endl;// true
 }
 else{
     cout<<"no ,both refering different memory"<<endl;
 }
 

}