#include<iostream>
#include<string>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
int main()  
{
    string str="malayalam";
    queue<char> queue;
    stack<char> stack;
    for(auto ch:str)s
    {
        queue.push(ch);
        stack.push(ch);
    }
   while(!stack.empty())
   {
      char topElement=stack.top();
      char frontElement=queue.front();
      if(topElement!=frontElement)
      {
        cout<<"not a palindrome"<<endl;
        return 0;
      }
      stack.pop();
      queue.pop();
   }
   cout<<"it is a palindrome"<<endl;
}