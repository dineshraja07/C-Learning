#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Account{
   public:
    int amount;
    public :
    Account(int a):amount{a}
    {
        cout<<"Account constructor called"<<endl;
    }
    void deposit()
    {
        cout<<"Account - deposit"<<endl;
    }
};
class SavingsAccount :public Account{
    private:
    int amount;
    public :
    SavingsAccount(int a):Account{a}
    {
        cout<<"SavingAccount constructor called"<<endl;
    }
    void deposit()
    {
        cout<<"SavingAccount - deposit"<<endl;
    }
};
void display_account(Account &acc)//convert anything into Account
{
    acc.deposit();
  /*even through ,we sent SavingsAccount reference,here this function convert that reference into 
  Account reference so, Account member will be called */

}
int main()
{
    Account a1(10);
    
    a1.deposit();
    SavingsAccount s1(20);
    s1.deposit();
    Account *a2=new SavingsAccount(30);
    a2->deposit();//it calls the Account function but in java it calls SavingsAccount function
    display_account(a1);//Account function called
    display_account(s1);//Account function called ,in c++ methods called based on reference not based on type of object
    display_account(*a2);//Account function called
/* To make compiler to call the method based on the object type like java
we go for Dynamic Binding(run time) which is virtual function */
}