#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    int n = s.length();
    sort(s.begin(), s.end());

    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[i - 1])
            count++;
    }

    (count % 2) == 0 ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";

    return 0;
}