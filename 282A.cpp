#include <iostream>
using namespace std;
// accepted solution
int main()
{
    int n;
    cin >> n;
    int X = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        size_t found = s.find('+');
        if (found != string::npos)
            X++;
        else
            X--;
    }
    cout << X << endl;
    return 0;
}
