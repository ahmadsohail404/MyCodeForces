#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, r = 0;
    cin >> x >> y;

    for (int i = 0; i < y; i++)
    {
        r = x % 10;
        if (r == 0)
            x /= 10;
        else
            x -= 1;
    }
    cout << x;

    return 0;
}
