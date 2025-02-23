#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {11, 23, 45, 9, 34, 56};

    // Remove the element at index 2
    v.erase(v.begin() + 2);

    for (auto i : v)
        cout << i << " ";

    // remove all elements of vector
    v.clear();
    cout << endl << "size of vector : " << v.size() << endl;

    return 0;
}


