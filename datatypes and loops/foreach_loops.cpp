//
// Created by wong2 on 20/3/2023.
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> array = {1,2,3,4,5};

    for (int a:array) {
        cout << a << endl;
    }

    // Multidimensional array

    vector <int>vector1(10, 4) ;

    for (int i = 0; i <= vector1.size(); i++){
        cout << vector1[i] << endl;

    }

    vector1.resize(1);

    for (int i: vector1){
        cout << i << endl;
    }

/* Only available from cpp 20 +
    for (auto [index, value] : ranges::views::enumerate(array)) {
      std::cout << "Index: " << index << ", Value: " << value << std::endl;
      }
*/



}