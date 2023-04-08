//
// Created by wong2 on 21/3/2023.
//

#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;



int main(){
    unordered_set<int> primes({2, 3, 5, 7});
    primes.insert(9);

    cout << "Presence of value:" << primes.count(5) << endl; // returns 1 if present, 0 if absent

    set<int> primes1({2, 3, 5, 7});
    primes1.insert(7); // Will not insert because it is already present
    /* A set will arrange it in chronological order for char and strings,
       and numeric order for int and float*/

    auto it = primes1.find(3); // Returns an iterator

    // iterates from the "3" element onwards, inclusive
    for (it; it != primes1.end(); ++it){
        cout << *it << endl;
    }



    return 0;
}
