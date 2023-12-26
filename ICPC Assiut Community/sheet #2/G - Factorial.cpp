#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    for (int i=0; i<n; ++i)
    {
        cin >> x;
        long long s = 1;
        for (int ii=1; ii<x; ii++)
        {
        if (x==0)
        {
            cout << 1 << "\n";
            break;
        }
            s *= (ii+1);
        }
        cout << s << "\n";
    }
}
