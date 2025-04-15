#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;
int main()
{
    int num=10;
    cout<<dec<<num<<endl;//decimal 10
    cout<<hex<<num<<endl;//hexadecimal a
    cout<<oct<<num<<endl;//octal 12
    cout<<num<<endl; //last change octal : 12

    cout<<showbase;
    cout<<hex<<num<<endl;//0x prefix for hexa decimal
    cout<<oct<<num<<endl;// 0 prefix for octal
    cout<<uppercase;//make uppercase output: 0XFF

    int value=-222;
    cout<<showpos;//show value as -222
    cout<<dec<<value<<endl;
//like boolean, we can use setf(),resetiosflag()

}