#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, s=0, x=0, m;
    cin >> n >> a >> b;

    for (int i=1; i<=n; i++)
    {
        m = i;
        x = 0;
        for (int j=1; j<=int(log10(i) + 1); j++)
        {
            x = x + m%10;
            m = (m - m%10) / 10;
        }
        if (x>=a && x<=b)
        {
//            cout << x << "\n";
            s += i;
        }
    }
    cout << s;
}
