//
// Created by wong2 on 20/3/2023.
//

#include <iostream>

using namespace std;

int main(){
    int array[] = {1,2,3,4,5};

    for (int a:array) {
        cout << a << endl;
    }

/* Only available from cpp 20 +
    for (auto [index, value] : ranges::views::enumerate(array)) {
      std::cout << "Index: " << index << ", Value: " << value << std::endl;
      }
*/



}