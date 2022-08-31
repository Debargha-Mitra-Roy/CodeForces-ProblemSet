/*
    LINK:   https://codeforces.com/contest/1722/problem/A
*/

#include <iostream>
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

        string str;
        cin >> str;

        sort(str.begin(), str.end());

        string name = "Timur";
        sort(name.begin(), name.end());

        if (str == name)
            cout << "YES\n";

        else
            cout << "NO\n";
    }

    return 0;
}