// word capitalization
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if ((int)s[0] >= 97 && (int)s[0] <= 122)
        s[0] = (char)((int)s[0] - 32);
    cout << s << "\n";
    return 0;
}