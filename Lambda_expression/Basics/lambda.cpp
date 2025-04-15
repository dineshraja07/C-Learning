#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Multiplier
{
       public:
    int num{};
 
      Multiplier(int num):num{num}
      {
      }
      int operator()(int n)const{
        return num*n;
      }
    
};
template<typename T>
struct displayer{
    void operator()(const T &data)
    {
         cout<<data<<" "<<endl;
    }
};
int main()
{
    vector<int> vec{1,2,3,4,5};
    vector<string> string_vec{"gopi","santhosh","sarath"};
    transform(vec.begin(),vec.end(),vec.begin(),Multiplier{1000});

    displayer<string> d1;
    d1("dinesh"); //overrided the () to display the value and it is called function object
    for_each(vec.begin(),vec.end(),displayer<int>());
    for_each(string_vec.begin(),string_vec.end(),d1);//d1 is object act a function so its function object
   
   // using lambda 
   cout<<"======================="<<endl;
      cout<<"using lambda"<<endl;
    for_each(string_vec.begin(),string_vec.end(),[](string a){cout<<a<<endl;});
//note : compiler creates unnamed function object from lambda

    auto l=[](int x){cout<<"lambda funtion data : "<<x<<endl;};
    l(1000); 
    auto sumLambda=[](int a,int b)->int {return a+b;};
    cout<<sumLambda(100,200)<<endl;//300

    int n=3;
    int arr[]={10,20,30};
    auto sum=[](int arr[],int n){
      int sum=0;
      for(int i=0;i<n;i++)
      {
        sum=sum+arr[i];
      }
      return sum;
    };
    cout<<sum(arr,n)<<endl;
};