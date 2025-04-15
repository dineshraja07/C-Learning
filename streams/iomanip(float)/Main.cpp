#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;
int main()
{
    double num=12.3456773;
    cout<<num<<endl;// output :12.3457
    cout<<setprecision(7);// 7 counts decimal and non decimal
    cout<<num<<endl;//output : 12.34568 since no_of_digits is 7
    cout<<fixed;//it make that precision start after the decimal
    cout<<num<<endl;//12.3456773
    cout<<setw(15);
    cout<<num<<endl;

}