#include<iostream>
#include<vector>
using namespace std;
void changingFirstElement(vector<string> &vec)
{
  vec.at(0)="cristiano";
}
void changingSingleElement(int &a)
{
    a=1000;
}
int main()
{
       int *ptr=NULL;
       int number;
     cout<<"address holded by ptr : "<<ptr<<endl;
     number=1999;
     ptr=&number;
     char *ch;
     cout<<"address of number1 holded by ptr : "<<ptr<<endl;
     cout<<"address of ptr : "<<&ptr<<endl;
     // size for all pointers are equal
       cout<<"size of ptr pointer : "<<sizeof(ptr)<<endl;
      string name="Dinesh";
      string *str;
      str=&name;
      cout<<"name : "<<*str<<endl;
      name="raja";
      cout<<*str<<endl;
      vector<string> vec={"CR7","LM10","haaland","rodri"};
      changingFirstElement(vec);
      // here vector always pass by value
      // so , we need to send reference to function 
      cout<<vec[0]<<endl;
      int arr[]={1,2,3,4,5};
    //changing the specific address block in array
      changingSingleElement(arr[0]);
      cout<<arr[0]<<endl;

}
