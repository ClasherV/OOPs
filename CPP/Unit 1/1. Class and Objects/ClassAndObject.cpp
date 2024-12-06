// Class and Object

#include <iostream>
using namespace std;
class Account
{
    private:
        string name;
        float deposit;
        float withdraw;
        float balance;
    public:
        Account(string Name,float Amount)
        {
            name=Name;
            balance=Amount;
        }
        void Deposit(float Amount)
        {
            deposit=Amount;
            balance+=deposit;
            cout<<deposit<<" Rupees are Deposited to "<<name<<"'s Account"<<endl;
        }
        void Withdraw(float Amount)
        {
            withdraw=Amount;
            balance-=withdraw;
            cout<<withdraw<<" Rupees are Withdrawed from "<<name<<"'s Account"<<endl;
        }
        void display()
        {
            cout<<"Account Holder: "<<name<<endl;
            cout<<"Account Balance: "<<balance<<endl;
        }
};
int main()
{
    Account owner1("Vaibhav",50000);
    Account owner2("Ayush",50000);
    owner1.Deposit(3000);
    owner2.Deposit(6000);
    cout<<endl;
    owner1.display();
    cout<<endl;
    owner2.display();
    cout<<endl;
    owner1.Withdraw(1000);
    owner2.Withdraw(4000);
    cout<<endl;
    owner1.display();
    cout<<endl;
    owner2.display();
    return 0;
}

// O/p: 3000 Rupees are Deposited to Vaibhav's Account
//      6000 Rupees are Deposited to Ayush's Account
//      
//      Account Holder: Vaibhav
//      Account Balance: 53000
//      
//      Account Holder: Ayush
//      Account Balance: 56000
//      
//      1000 Rupees are Withdrawed from Vaibhav's Account
//      4000 Rupees are Withdrawed from Ayush's Account
//      
//      Account Holder: Vaibhav
//      Account Balance: 52000
//      
//      Account Holder: Ayush
//      Account Balance: 52000