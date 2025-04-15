#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    // int arr[]={1,2,3,4,5};   size will be automatically set up
//    int arr[8]={1,2,3,4,5};  // remaining will allocated with '0'
//     cout<<arr[1];
//     int len=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<len+1;i++)
//     {
//         cout<<"element at "<<i<<" th index : "<<arr[i]<<endl;  //it'll give garbage value when access out of bound index
//     }
//     int matrix[3][3];
//     cout<<"enter the elements for matrix"<<endl;
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             cin>>matrix[i][j];
//         }
//     }
//       for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    int *ptr=new int[5];
    for(int i=0;i<5;i++)
    {
        ptr[i]=(i+1)*100;
    }
    cout<<"[ ";
    for(int i=0;i<5;i++)
    {
        cout<<ptr[i]<<" ";
    }
    cout<<" ]"<<endl;
        cout<<ptr<<endl;
    delete [] ptr;
    cout<<ptr<<endl;

}