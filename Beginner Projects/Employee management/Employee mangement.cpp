//
// Created by wong2 on 22/3/2023.
//

#include <iostream>
#include <string>
#include <set>
#include <stack>
#include <map>

using namespace std;

class Employee{
private:
    int salary;
    long double increment;
public:

    // Constructor
    Employee(int _salary, long double _increment){
        salary = _salary;
        increment = _increment;
    };

    // Getter Methods
    int getSalary(){
        return salary;
    };

    long double getIncrement(){
      return increment;
    };

    // Setter Methods

    void setSalary(int _salary){
        salary = _salary;
    };

    void setIncrement(long double _increment){
        increment = _increment;
    };



};

int main(){

    


    return 0;
}