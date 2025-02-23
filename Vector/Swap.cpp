// C++ program to swap two vectors of strings
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> v1 = {"apple", "banana", "cherry"};
    vector<string> v2 = {"orange", "kiwi"};

    // Swapping contents of v1 and v2
    v1.swap(v2);

    cout << "v1: ";
    for (auto s : v1)
      	cout << s << " ";
    cout << endl << "v2: ";
    for (auto s : v2)
      	cout << s << " ";

    return 0;
}

