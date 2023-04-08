#include <bits/stdc++.h>

using namespace std;

int main(){

    // Get input of No lunchboxes, and then no schools, and then space seperated values for how much each school needs

    long long lbx; // Number of lunchboxes that you have
    long long s; // Number of schools

    long long d; // sum of school demand


    vector<long long> lbxn; // lunchbox needed


    cin >> lbx >> s;
    lbxn.reserve(s);

    for (int i = 0; i < s; i++){

        long long lbxnP; // lunchbox needed placeholder
        cin >> lbxnP;
        lbxn.push_back(lbxnP);

    }

    d = (long long) accumulate(lbxn.begin(), lbxn.end(), 0LL);
    sort(lbxn.begin(), lbxn.end());
    while (d > lbx){

        d -= lbxn.back();
        lbxn.pop_back();
    }

    cout << lbxn.size();


    return 0;
}