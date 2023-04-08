//
// Created by wong2 on 8/4/2023.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;

//    v.resize(10); //
    v.reserve(10); // Reserves space in a vector
    for (int i = 1; i <= 10; i++){
        v.push_back(i);
    };

    cout << "First one: " << "Size of vector " << v.size() << endl;

    for (auto it = v.begin(); it != v.end(); it++){
        cout << "First one: " << "Elements in vector " << *it << endl;
    };

    // Erase last example
    v.erase(v.begin(), v.end());

    for (int i = 1; i <= 5; i++){
        v.push_back(i);
    };

    // using iter
    vector<int>::iterator ptr;

    for (ptr = v.begin(); ptr < v.end(); ptr++){
        cout << "Second one: " << "Elements in vector " << *ptr << endl;
    };

    cout << "Third one: " << "Value " << 3 << endl;
    auto it = upper_bound(v.begin(), v.end(),3);
    cout << "Third one: " << "Upper bound Index " << it - v.begin() << endl;
    it = lower_bound(v.begin(),v.end(),3);
    cout << "Third one: " << "lower bound Index " << it - v.begin() << endl;



    return 0;
};
