#include<iostream>
#include<string>
#include<vector>
using namespace std;
class DivideByZeroException{

};
class NegativeValueException{
   
};
void calculateAverage(int total,int n)
{
    if(total<0 || n<0)
    {
       throw NegativeValueException();
    }
    if(n==0)
    {
         throw DivideByZeroException();
    }
    cout<<"Average : " <<(total/n)<<endl;
}
int main()
{
    try
    {
         calculateAverage(10,0);
         calculateAverage(-9,10);
    }
    catch(const DivideByZeroException &ex)
    {
        cout<<"DivideByZeroException"<<endl;
    }
    catch(const NegativeValueException &ex)
    {
        cout<<"NegativeValueException"<<endl;
    }
}