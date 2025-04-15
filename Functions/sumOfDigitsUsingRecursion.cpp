// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int sumOfDigits(int n)
{
     if(n==0)
     {
         return 0;
     }
     int rem=n%10;
     return rem+sumOfDigits(n/10);
}
int LCM(int n1,int n2,int i)
{
    if(i%n1==0 && i%n2==0)
    {
        return i;
    }
    return LCM(n1,n2,++i);
}
int main() {
    int result=sumOfDigits(11111);
    cout<<result<<endl;
    int lcm=LCM(4,6,2);
    cout<<lcm<<endl;
    return 0;
}