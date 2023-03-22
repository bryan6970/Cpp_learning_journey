//
// Created by wong2 on 21/3/2023.
//
#include <iostream>
# include <stack>
#include <queue>

/* A stack has a First In Last Out principle, which means that 'pushing' something
in will append it to the front */

using namespace std;

int main() {
    stack<int> plates;

    for (int i = 0; i <= 3; i++) {
        plates.push(i);
    };

    for (int i = 0; i <= plates.size(); i++) {
        cout << plates.top() << endl;
        plates.pop();
    };

    // Queue

    queue<int> tables;

    for (int i = 0; i <= 3; i++) {
        tables.push(i);
    };


    for (int i = 0; i <= plates.size(); i++) {
        cout << "Front " << tables.front() << endl << "Back " << tables.back() << endl;
        tables.pop(); // removes the most recently added element
    };


    return 0;
}

