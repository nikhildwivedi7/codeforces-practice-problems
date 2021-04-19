
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, q, c1 = 0, c0 = 0;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            c1++;
        else
            c0++;
    }
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int x;
            cin >> x;
            arr[x - 1] = 1 - arr[x - 1];
            if (arr[x - 1] == 1)
            {
                c1++;
                c0--;
            }
            else
            {
                c0++;
                c1--;
            }
        }
        else
        {
            int k;
            cin >> k;
            if (k <= c1)
                cout << "1"
                     << "\n";
            else
                cout << "0"
                     << "\n";
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
