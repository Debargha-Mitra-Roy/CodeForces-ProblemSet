/*
    LINK:   https://codeforces.com/contest/1728/problem/A
*/

#include <iostream>
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

        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            v.push_back(i + 1);
        }

        if (n % 2)
        {
            cout << 1 << " ";

            for (int i = n - 2; i >= 2; i--)
            {
                cout << i << " ";
            }
        }

        else
        {
            for (int i = n - 2; i >= 1; i--)
            {
                cout << i << " ";
            }
        }

        cout << n - 1 << " " << n << "\n";
    }

    return 0;
}