/*
    LINK:   https://codeforces.com/contest/1747/problem/C
*/

#include <iostream>
#include <vector>
#include <climits>
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

        int minimum = INT_MAX;

        for (int i = 1; i < n; i++)
        {
            minimum = min(minimum, arr[i]);
        }

        if (arr[0] <= minimum)
            cout << "BOB\n";

        else
            cout << "ALICE\n";
    }

    return 0;
}