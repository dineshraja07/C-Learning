#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Account{
    protected:
      int amount=5000;
    public:
      Account(int amount):amount{amount}
      {
        // cout<<"Account constructed called"<<endl;
     }
   ~Account()
     {
    //   cout<<"Account class object goes out of scope"<<endl;
     }
    virtual  void deposit(double amount)=0;
    
    virtual void withdraw(double amount)=0;
    virtual void updateBalance(int amount)=0;
    virtual void getBalance()=0;
};
class SavingsAccount:public Account{
   public:
    SavingsAccount(int amount):Account{amount}
    {
        // cout<<"savingsAccount constructor"<<endl;
    }
    ~SavingsAccount()
    {
        // cout<<"savingsAccount destructor"<<endl;
    }
    virtual void getBalance()
    {
       cout<<"balance amount : "<<this->amount<<endl;
    }
    virtual void updateBalance(int amount)
    {
       this->amount=amount;
    }
    virtual void deposit(double amount)
    {  
        this->amount+=amount;
       cout<<"Deposited amount : "<<amount<<endl;
    }
    virtual   void withdraw(double amount)
    {
         this->amount-=amount;
        cout<<"withdraw amount : "<<amount<<endl;
    }
};
int main()
{
    SavingsAccount sav_acc{50000};
    sav_acc.deposit(25000);
    sav_acc.getBalance();
   sav_acc.withdraw(20000);
   sav_acc.getBalance();
;}