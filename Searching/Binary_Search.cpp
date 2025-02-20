#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for(auto &i : arr)
            cin >> i;

        int x;
        cin >> x;
        bool found = 0;

        int left = 0, right = n-1;
        while(left <= right)
        {
            int mid = (left + right) / 2;
            if(x == arr[mid])
            {
                found = 1;
            }
            if(x < arr[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }
        if(found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
