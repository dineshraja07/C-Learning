#include<iostream>
#include<string>
#include<vector>
#define NAME "Dinesh raja"
#define ROLL 49
/* Macros are the piece of code with their values 
which will be processe by C++ processor before actual compilation
*/
#define findMax(a,b) ((a>b)?a:b)
//since the findeMax takes any type of data,it's a generic method
using namespace std;
int main()
{
    cout<<ROLL<<endl;
    cout<<NAME<<endl;
    cout<<findMax(10,45)<<endl;
}