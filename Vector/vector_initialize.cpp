#include <bits/stdc++.h>
using namespace std;

void printV(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v1;

    vector<int> v2 = {1, 4, 2, 3, 5};

    vector<int> v3{5, 6, 7, 8, 9};

    vector<int> v4(5, 9);

    printV(v1);     // output: 
    printV(v2);     // output: 1 4 2 3 5
    printV(v3);     // output: 5 6 7 8 9
    printV(v4);     // output: 9 9 9 9 9

    return 0;
}