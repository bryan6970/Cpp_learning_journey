//
// Created by wong2 on 13/3/2023.
//

#include <iostream>

using namespace std;


void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}


int main(){

    int a = 9;
    int b = 1;

    cout << a << " "<< b << endl;

    swap(a, b);\

    cout << a << " " << b << endl;




    return 0;
}