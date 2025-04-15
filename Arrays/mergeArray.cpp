#include<iostream>
#include<string>
#include<vector>
using namespace std;
void print(int arr[],size_t size)
{
    cout<<"Array element"<<endl;
     for(int i=0;i<size;i++)
     {
        cout<<i<<" ";
     }
       cout<<endl;
}
int* applyAll(int arr1[],int arr2[],size_t size1,size_t size2,size_t &result_size)
{
    int *result=new int[size1+size2];
    int count=0;
    for(int i=0;i<size1;i++)
    {
         result[count++]=arr1[i];
    }
    for(int i=0;i<size2;i++)
    {
        result[count++]=arr2[i];
    }
    result_size=count;
   return result;
}
int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={9,8,7,6,4,3,4,5};
    const size_t size1=5;
    const size_t size2=8;
    print(arr1,size1);
    print(arr2,size2);
    size_t result_size;
    int *result=applyAll(arr1,arr2,size1,size2,result_size);
    // for(int i=0;i<result_size;i++)
    // {
    //     cout<<result[i]<<endl;
    // }
    print(result,result_size);
}