#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string ans;
    int upper = 0, lower = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
            upper++;
        else
            lower++;
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (upper > lower)
            ans += toupper(s[i]);
        else
            ans += tolower(s[i]);
    }
    cout << ans;

    return 0;
}