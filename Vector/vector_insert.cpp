#include <bits/stdc++.h>
using namespace std;

void printV(vector<char> &v) {
    for (auto i : v)
        cout << i << " ";

    cout << endl;
}

int main() {
    vector<char> v = {'a', 'f', 'd'};

      // Inserting 'z' at the back
      v.push_back('z');
      printV(v);    // output: a f d z

      // Inserting one element ('c') at index 1
      v.insert(v.begin() + 1, 'c');
      printV(v);    // output: a c f d z

      // Inserting one element ('b') at beggining
      v.insert(v.begin(), 'b');
      printV(v);    // output: b a c f d z

      // Inserting two elements at index 2 & 3
      v.insert(v.begin() + 2, {'x', 'y'});
      printV(v);    // output: b a x y c f d z

    return 0;
}


