/*
    LINK:   https://codeforces.com/contest/1747/problem/A
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int posSum = 0, negSum = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
                negSum += arr[i];

            else
                posSum += arr[i];
        }

        int ans = 0;

        if (abs(negSum) > posSum)
            ans = abs(negSum) - posSum;

        else
            ans = posSum - abs(negSum);

        cout << ans << "\n";
    }

    return 0;
}