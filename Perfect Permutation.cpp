/*
    LINK:   https://codeforces.com/problemset/problem/233/A
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                v[i] = i + 2;

            else
                v[i] = i;
        }

        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
    }

    else
        cout << -1;

    return 0;
}