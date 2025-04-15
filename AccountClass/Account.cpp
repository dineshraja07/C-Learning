#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Account{
    private:
      int amount=5000;
    public:
      Account()
      {
        cout<<"Account constructed called"<<endl;
    }
   ~Account()
     {
      cout<<"Account class bject goes out of scope"<<endl;
     }
    void deposit(double amount)
    {
       cout<<"Deposited amount : "<<amount<<endl;
    }
    void withdraw(double amount)
    {
        cout<<"withdraw amount : "<<amount<<endl;
    }
  
};
class SavingsAccount:public Account{
   public: SavingsAccount()
    {
        cout<<"savingsAccount constructor"<<endl;
    }
    ~SavingsAccount()
    {
        cout<<"savingsAccount destructor"<<endl;
    }
//    public:   void displayBalance()
//       {
//          cout<<"balace in savings account : "<<amount<<endl;//error
//       }
};
int main(){
  Account *ac1=new Account();
//   ac1->deposit(12000);
//   cout<<"balance : "<<ac1->amount<<endl;
  delete ac1; // since it is dynamic object,destructor called when we delete the object so after that, obj goes out of scope
  SavingsAccount sac1;
//   sac1.displayBalance();//error
//   cout<<"balance in savings account"<<endl;
//   sac1.withdraw(20000);
}
// in case all the objects are static
/*
 when we create object for child class,then it invokes all the constructors
 from base class constructor to child class constructor
in Destructor
those will be invoked reverse
*/