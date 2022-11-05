/*
    LINK:   https://codeforces.com/contest/1747/problem/B
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

        int count = (n + 1) / 2;
        cout << count << "\n";

        for (int i = 0; i < count; i++)
        {
            int firstPair = 3 * i + 1;
            int secondPair = 3 * (n - i);
            cout << firstPair << " " << secondPair << "\n";
        }
    }

    return 0;
}