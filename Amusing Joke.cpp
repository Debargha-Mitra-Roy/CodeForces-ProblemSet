/*
    LINK:   https://codeforces.com/problemset/problem/141/A
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s1, s2, str;
    cin >> s1 >> s2 >> str;

    int n1 = s1.length() + s2.length();
    int n2 = str.length();

    string s = s1 + s2;
    sort(s.begin(), s.end());

    sort(str.begin(), str.end());

    if (n1 == n2 && s == str)
        cout << "YES\n";

    else
        cout << "NO\n";

    return 0;
}