// Petya and Strings
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    transform(b.begin(), b.end(), b.begin(), ::toupper);
    int len = a.length();
    int flag = 0;
    for (int i = 0; i < len; i++)
    {
        if (a[i] == b[i])
            continue;
        else if ((int)a[i] < (int)b[i])
        {
            flag = -1;
            break;
        }
        else
        {
            flag = 1;
            break;
        }
    }
    cout << flag << endl;
    return 0;
}