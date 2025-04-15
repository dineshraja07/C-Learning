#include<iostream>
using namespace std;
int main()
{
     cout<<"Enter the grade you got in the exam"<<endl;
     char grade;
     cin>>grade;
     switch(grade)
     {
        case 'o':
        cout<<"hurray!! you got above 95";
        break;
        case 'a':
        cout<<"good, you got above 90 marks";
        break;
        case 'b':
        cout<<"you got 80 and above , study hard";
        break;
        case 'c':
        cout<<"you got 70 and above";
        break;
        case 'd':
        cout<<"you got above 50";
        break;
        case 'e':
        cout<<"you have failed in exam";
        break;
        default:
        cout<<"invalid intput";
        
     }
    int result;
     result=(12<100)?100:12;
     cout<<"\n"<<result;
     return 0;
}