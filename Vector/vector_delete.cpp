#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6};
    vector<int> v2 = {1, 2, 3, 4, 5, 6, 7};

    // delete last element(6)
    v.pop_back();
    for (auto i : v)
        cout << i << " ";
    cout <<endl;    // output: 1 2 3 4 5

    // delete last element(5)
    v.erase(v.end() - 1);
    for (auto i : v)
        cout << i << " ";
    cout <<endl;    // output: 1 2 3 4

    // delete 2
    v.erase(find(v.begin(), v.end(), 2));
    for (auto i : v)
        cout << i << " ";
    cout <<endl;    // output: 1 3 4

    // Remove the element at index 2
    v.erase(v.begin() + 2);
    for (auto i : v)
        cout << i << " ";
    cout <<endl;    // output: 1 3

    // Remove elements in the range [1, 4)
    v2.erase(v2.begin() + 1, v2.begin() + 4);
    for (auto i : v2)
        cout << i << " ";   // output: 1 5 6 7
    return 0;
}

