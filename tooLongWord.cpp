#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;
        if (s.length() > 10)
        {
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
        }
        else
            cout << s << endl;
    }
    return 0;

    // string s[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> s[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (s[i].length() > 10)
    //     {
    //         cout << s[i][0] << s[i].length() - 2 << s[i][n - 1] << endl;
    //     }
    //     else
    //         cout << s[i] << endl;
    // }
}