//
// Created by Bryan on 12/3/2023.
//
#include <iostream>
#include <string>

using namespace std;


int main(){

    long double deposit_money = 0;

    long double withdraw_money = 0;

    long double account_balance = 100;


    cout << "How much money do you want to take out?" << endl;
    cin >> withdraw_money;

    account_balance -= withdraw_money;
    withdraw_money = 0;

    cout << "Your account balance is: " << account_balance << endl;

    cout << "How much money do you want to deposit?" << endl;
    cin >> deposit_money;

    account_balance += deposit_money;
    deposit_money = 0;

    cout << "Your account balance is: " << account_balance << endl;



    return 0;
}

