//Stones on the table
#include <iostream>
using namespace std;
#define ll long long
int main()
{
    ll n, m, a;
    cin >> n >> m >> a;
    ll l, b;
    l = n / a;
    b = m / a;
    if (n % a != 0)
        l++;
    if (m % a != 0)
        b++;
    cout << (l * b) << "\n";
    return 0;
}