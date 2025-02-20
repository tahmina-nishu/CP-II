/// Lower Bound : ekta sorted array te onekgulo same value er first tar index i lower bound
/// Upper Bound : ekta sorted array te onekgulo same value er last tar porer index i upper bound

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for(auto &i : arr)
        cin >> i;

    while(k--)
    {
        int x;
        cin >> x;
        bool found = 0;

        int left = -1, right = n;   // left k possible sob lower bound theke choto r right k possible sob upper bound theke boro dhorte hobe
        while(left + 1 < right) // left & right pashapashi asle loop theme jabe
        {
            int mid = (left + right) / 2;
            if(x <= arr[mid])
                right = mid;
            else
                left = mid;
        }

        cout << "Lower Bound : " << right << endl;

        left = -1;
        right = n;

        while(left + 1 < right)
        {
            int mid = (left + right) / 2;
            if(x < arr[mid])
                right = mid;
            else
                left = mid;
        }

        cout << "Upper Bound : " << right << endl;
    }
}
