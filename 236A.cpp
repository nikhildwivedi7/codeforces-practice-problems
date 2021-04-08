//Boy or Girl
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    int chr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        if (chr[s[i] - 'a'] == 0)
            count++;
        chr[s[i] - 'a']++;
    }
    if (count % 2 == 0)
        cout << "CHAT WITH HER!"
             << "\n";
    else
        cout << "IGNORE HIM!"
             << "\n";
    return 0;
}