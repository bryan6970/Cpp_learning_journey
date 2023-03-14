//
// Created by Bryan on 12/3/2023.
//
//
// Updated with classes on 13/3/23
//
// Updated with constructors on 14/3/23

#include <iostream>
#include <string>
#include "simple_bank.h"

using namespace std;


int main(){

    Bank* My_bank= new Bank(50,0.5,100);

    cout << My_bank->getAmountInAccount()<< endl;

    /*
    cout << "How much money do you want to take out?" << endl;
    cin >> My_bank->withdraw_money;

    My_bank.account_balance -= My_bank.withdraw_money;
    My_bank.withdraw_money = 0;

    cout << "Your account balance is: " << My_bank.account_balance << endl;

    cout << "How much money do you want to deposit?" << endl;
    cin >> My_bank.deposit_money;

    My_bank.account_balance += My_bank.deposit_money;
    My_bank.deposit_money = 0;

    cout << "Your account balance is: " << My_bank.account_balance << endl;

*/

    return 0;
}

