//
// Created by Bryan on 12/3/2023.
//
//
// Updated with classes on 13/3/23
//

#include <iostream>
#include <string>

using namespace std;

class Bank{
public:
    long double deposit_money = 0;

    long double withdraw_money = 0;

    long double account_balance = 100;

};

int main(){

    Bank My_bank;

    cout << "How much money do you want to take out?" << endl;
    cin >> My_bank.withdraw_money;

    My_bank.account_balance -= My_bank.withdraw_money;
    My_bank.withdraw_money = 0;

    cout << "Your account balance is: " << My_bank.account_balance << endl;

    cout << "How much money do you want to deposit?" << endl;
    cin >> My_bank.deposit_money;

    My_bank.account_balance += My_bank.deposit_money;
    My_bank.deposit_money = 0;

    cout << "Your account balance is: " << My_bank.account_balance << endl;



    return 0;
}

