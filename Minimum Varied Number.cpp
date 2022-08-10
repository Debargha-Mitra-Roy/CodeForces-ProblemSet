/*
    LINK:   https://codeforces.com/contest/1714/problem/C
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr;

        int i = 9;

        if (n < 9)
            arr.push_back(n);

        else
        {
            while (n > 0)
            {
                n = n - i;
                arr.push_back(i);
                i--;

                if (n < i)
                {
                    arr.push_back(n);
                    break;
                }
            }
        }

        sort(arr.begin(), arr.end());

        if (*arr.begin() == 0)
            arr.erase(arr.begin());

        for (auto it : arr)
        {
            cout << it;
        }
        cout << "\n";
    }

    return 0;
}