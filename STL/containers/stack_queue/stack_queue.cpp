#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
/*
1.no iterators
*/
void display(stack<int> stack)
{
 int number;
    while(!stack.empty()) //is empty
    {
       number=stack.top();//return the top element
       cout<<number<<endl;
       stack.pop(); //remove the top element
    }
}
int main()
{
    stack<int> stack;
    stack.push(10);
    stack.push(2); 
    stack.push(2425);
    display(stack);
    stack.push(1000);
    cout<<stack.size()<<endl;
    queue<int> queue;
    queue.push(1);//insert in end
    queue.push(2);
     queue.push(3);
      queue.push(4);
       queue.push(5);
    queue.pop();//remove at front
//since last in first out , we have front and back()
    cout<<queue.front()<<endl;
    cout<<queue.back()<<endl;
    cout<<queue.empty()<<endl;

}