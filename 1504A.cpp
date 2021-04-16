#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool palindrome(string x)
{
    int i = 0, j = x.length() - 1;
    while (i < j)
    {
        if (x[i] == x[j])
        {
            i++;
            j--;
        }
        else
            return 0;
    }
    return 1;
}
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int len = s.length();
        int flag = 0;
        for (int i = 0; i < len; i++)
        {
            if (s[i] != 'a')
                flag = 1;
        }
        if (flag == 0)
            cout << "NO\n";
        else
        {
            cout << "YES"
                 << "\n";
            if (palindrome(s + (char)'a') == 0)
                cout << (s + 'a') << "\n";
            else
                cout << (char)'a' + s << "\n";
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    // for etting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    solve();

    return 0;
}
