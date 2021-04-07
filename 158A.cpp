#include <iostream>
using namespace std;

int main()
{
    int n, k, res = 0, last = 0;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        if (x != 0)
        {
            res++;
            last = x;
        }
    }
    for (int i = 0; i < n - k; i++)
    {
        int x;
        cin >> x;
        if (x == last && x != 0)
            res++;
    }
    cout << res << endl;
    return 0;
}
