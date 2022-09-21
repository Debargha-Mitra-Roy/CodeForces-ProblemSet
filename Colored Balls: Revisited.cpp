/*
    LINK:   https://codeforces.com/contest/1728/problem/A
*/

#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if (n == 1)
            cout << "1\n";

        else
        {
            int max = INT_MIN, index = 0;

            for (int i = 0; i < n; i++)
            {
                if (v[i] > max)
                {
                    index = i;
                    max = v[i];
                }
            }

            cout << (index + 1) << "\n";
        }
    }

    return 0;
}