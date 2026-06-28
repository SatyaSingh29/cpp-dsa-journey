#include<iostream>
using namespace std;

class ATM
{
    public:
       virtual void withdraw(double amout)=0;
       virtual void deposit(double amout)=0;
};

class BankAccount : public ATM
{
    double balance;
    
    public:
        BankAccount(){
            balance = 1000;
        }
        
        void withdraw(double amount)
        {
            if(amount <= balance)
            {
                balance -= amount;
                cout << "Withdrawn: " << amount << endl;
                cout << "Remaining Balance: " << balance << endl;
            }
            else
            {
                cout << "Insufficient Balance!" << endl;
            }
        }
        
        void deposit(double amount)
        {
            balance += amount;
            cout << "Deposited: " << amount << endl;
            cout << "Current Balance: " << balance << endl;
        }
};

int main(){
    BankAccount b1;
    
    b1.deposit(1000);
    b1.withdraw(300);
    
}
