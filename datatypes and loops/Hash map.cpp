//
// Created by wong2 on 21/3/2023.
//
#include <iostream>
#include <unordered_map>
#include <map>

using namespace std;

/* A map is like a dictionary in python, with a key and a value,
   It cannot contain duplicate keys
*/

/* In an Ordered map, the order goes by the key */

int main(){
    unordered_map<std::string, int> country_codes({{"India", 91},
                                                   {"Italy", 39},
                                                  });


    /* Use <map>.at() to check if an element is there.
       It will throw and error instead of creating a new item
    */

    cout << "India's country code: "<<country_codes.at("India") << endl; // Returns india's country code

    // For loop with maps
    for (pair x:country_codes){
        cout << x.first << " "<< x.second << "\n";

    }




    return 0;
}