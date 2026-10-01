// C++ program to validate ATM withdrawal based on account type, balance, and pin number, whether atm has sufficient funds.

#include <iostream>
using namespace std;
int main(){
    float balance;
    cout<<"Enter your account balance:";
    cin>>balance;
    float withdrawal_amount;
    cout<<"Enter the amount you want to withdraw:";
    cin>>withdrawal_amount;
    int pin;
    cout<<"Enter pin number:";
    cin>>pin;
    int account_type;
    cout<<"Enter account type (1 for savings, 2 for current):";
    cin>>account_type;
    float atm_balance;
    cout<<"Enter ATM balance:";
    cin>>atm_balance;
    if(pin==1234)
    {
        if(account_type==1 || account_type==2)
        {
            if(balance>=withdrawal_amount)
            {
                if(atm_balance>=withdrawal_amount)
                {
                    cout<<"Withdrawal successful."<<endl;  
                }
                else
                {
                    cout<<"ATM does not have sufficient funds."<<endl;
                }
            } 
        }    
    }
}