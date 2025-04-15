#include<iostream>
#include <iomanip>
#include <compare>
using namespace std;
int main()
{
    int num=10;
    num=num+10;
    cout<<num<<endl;
    cout<<num++<<endl;
    cout<<++num<<endl;
    cout<<num--<<endl;
    cout<<--num<<endl;
    cout<<num++ +10<<endl;
    cout<<++num+10<<endl;
    double num2=static_cast<double>(num);
    cout<<fixed<<setprecision(3)<<num2<<endl;
    int physics,chemistry,maths;
    int total;
    cout<<"enter the three marks"<<endl;
    cin>>physics>>chemistry>>maths;
    total=physics+chemistry+maths;
    double avg=0.0;
    avg=total/3.0;
    cout<<"avg is : "<<avg<<endl;
    cout<<(avg==total)<<endl;// false so , if gives 0
    cout<<(12.4==12.333)<<endl;
    cout<<(12.4==12.4)<<endl;
    char ch=65;
    ch=ch+1;
    cout<<"character after add with 1 : "<<ch<<endl;
    cout<<"compare 65 =='A' : "<<(ch==66)<<endl;
    double data1=45.999999999999999;
    int data2=data1;
    // auto result=(223<=>342); 
    // if(result<0)
    // {
    //     cout<<"left is less than right"<<endl;
    // }
    // else if(result>0){
    //     cout<<"left is greater than right"<<endl;
    // }
    // else{
    //     cout<<"both are equal"<<endl;
    // }
    int a=10,b=12,c=3;
    if(a>b && a>(c=c+46))
    {
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
        cout<<"c value : "<<c<<endl;
    }
/* in the above AND case, first conditions fails
so, c=c+46 will not get executed*/
/* if the first is true, then only the c get updated */
if(a>b || a>(c=(c+46)))
{
      cout<<"true"<<endl;
         cout<<"c value : "<<c<<endl;
}
else{
    cout<<"false"<<endl;    
       cout<<"c value : "<<c<<endl;
}
c+=10000;
cout<<c<<endl;
// but in OR case , it will be vice-versa
    return 0;
}