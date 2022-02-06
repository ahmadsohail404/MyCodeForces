#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int anton = 0, danik = 0;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            anton++;
        else
            danik++;
    }
    if (anton > danik)
        cout << "Anton";
    else if (danik == anton)
        cout << "Friendship";
    else
        cout << "Danik";

    return 0;
}