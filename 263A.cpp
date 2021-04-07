// BEAUTIFUL MATRIX
#include <iostream>
#include <cstdlib>
using namespace std;
// accepted solution
int main()
{
    int x, y;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int n;
            cin >> n;
            if (n == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    int ans = abs(2 - x) + abs(2 - y);
    cout << ans << "\n";
    return 0;
}