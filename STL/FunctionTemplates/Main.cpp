#include <iostream>
using namespace std;

template <typename T>
T MAX(T a, T b) { // T a,b both handle same type of data 
    return (a > b) ? a : b;
}
template<typename T1,typename T2> //here ,T1 handle anytype,T2 handle anytype
void func(T1 a ,T2 b)
{
    cout<<"a value : "<<a<<endl; 
    cout<<"b value : "<<b<<endl;
}
template <typename T>
void my_swap(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}
struct Person{
    string name;
    int num;
    bool operator>(const Person &rhs) const{  //< overloaded for MAX function to handle Person strcut
        return this->num > rhs.num;
    }
};
int main() {
    cout << MAX(12, 2) << endl;//12
    cout<<MAX(12.33,12.55)<<endl;//12.55
    cout<<MAX<char>('d','a')<<endl; // d
    Person p1{"dhoni",7};
    Person p2{"jaddu",8};
    Person p3=MAX(p1,p2);// error due to Person user defined type since < operator is not overloaded
    cout<<p3.name <<" is greater"<<endl; //OK ,since < overloaded
    func(12,23.45); // two different type
    func<char,int>('a',1234);
    int a=10;
    int b=15;
    my_swap(a,b);
    cout<<a<<" , "<<b<<endl;
    return 0;
}