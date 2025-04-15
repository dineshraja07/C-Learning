#include<iostream>
#include<string>
#include<vector>
#include<functional> 
#include<algorithm>
using namespace std;
class Person
{
   friend ostream&operator<<(ostream &os,const Person &rhs);
   private:
     string name;
     int age;
     public :
     Person(string name,int age):name{name},age{age}{};
     Person(const Person &p):name{p.name},age{p.age}{};
     string get_name()const{return name;};
     void set_name(string name){this->name=name;}
     int get_age(){return age;};
     void set_age(int age){this->age=age;}

 
};
ostream &operator<<(ostream &os,const Person &rhs)
{
    os<<"[ Person : "<<rhs.name<<" , Age: "<<rhs.age<<" ]"<<endl;
    return os;
}
void test1(){
   [](){cout<<"hello"<<endl;}();
    [](string str){cout<<"Hello "<<str<<endl;}("dinesh");
}
void test2()
{
    auto sumLambda=[](int a,int b){return a+b;};
    cout<<sumLambda(10,20)<<endl;
    
    auto swapLambda=[](int &a,int &b){
        int temp=a;
        a=b;
        b=temp;
    };
    int num1=10,num2=20;
    swapLambda(num1,num2); //pass by reference
    cout<<num1<<" "<<num2<<endl;

}
void test3()
{
    auto PersonLambda=[](Person &p){
        cout<<p<<endl;
    };
    Person p1{"dinesh",21};
    PersonLambda(p1);
}
void filter_vector(const vector<int> &vec,function<bool(int)> func) //(int) means int arguments, bool return type
{   /*above func is predicate lambda,Predicate is typically used with algorithms that take input data (individual objects/containers) and a predicate
, which is then called on input data to decide on further course of action.*/ 
   cout<<"[ ";
   for(auto i:vec)
   {
    if(func(i)) //if i>4 true , then cout<<i;
    {
        cout<<i<<" ";
    }
   }
   cout<<" ]"<<endl;
}
void test4()
{
     vector<int> nums={1,2,3,4,5,6,7,8,9};
     filter_vector(nums,[](int x){return x>4;});//this lambda return bool  
}
auto make_lambda(){ //return lambda function
        return [](){cout<<"lambda created using make_lambda function"<<endl;};
};
void test5()
{
    auto l5=make_lambda();
    l5();
}
void test6()
{
    vector<Person> vec={{"steph curry",40},{"lebron james",36},{"michael jorden",45}};
    for_each(vec.begin(),vec.end(),[](const Person p){
        cout<<p;
    });

    sort(vec.begin(),vec.end(),[](Person &lhs,Person &rhs)
    {
         return lhs.get_age()<rhs.get_age();
    });
    cout<<"after sorting"<<endl;
    for_each(vec.begin(),vec.end(),[](Person &p){
        cout<<p;
    });
}
int main()
{
     test1();
     test2();
     test3();
     test4();
     test5();
     test6();
    
}