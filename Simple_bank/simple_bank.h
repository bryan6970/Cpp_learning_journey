//
// Created by wong2 on 14/3/2023.
//

#ifndef FIRST_TRY_CLASS_H
#define FIRST_TRY_CLASS_H

#endif //FIRST_TRY_CLASS_H
class Bank{

private:
    long double monthly_deposit_amt;
    const long double monthly_interest;
    long double amount_in_account;
public:
    Bank(long double _monthly_deposit_amt, long double _interest_rate, long double _amount_in_account)
        : monthly_interest(_interest_rate){

        monthly_deposit_amt = _monthly_deposit_amt;
       amount_in_account = _amount_in_account;

    };

    long double getMonthlyDepositAmt(){
        return monthly_deposit_amt;
    }

    long double getMonthlyInterest(){
        return monthly_interest;
    };
    long double getAmountInAccount(){
        return amount_in_account;
    };

};
