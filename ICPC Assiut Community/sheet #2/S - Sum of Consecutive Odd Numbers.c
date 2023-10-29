#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        int a, b, x, y, s=0, j;
        cin >> a >> b;
        if (a>b)
        {
            x=b;
            y=a;
        }
        else
        {
            x=a;
            y=b;
        }
        x%2==0 ? j=x+1 : j=x;

        for (j; j<=y; j+=2)
        {
            if (j != y)
            {
                s+=j;
            }
            else
            {
                break;
            }
            //cout << s << "\n";
        }
            x%2==0 ? cout << s << "\n" : cout << s-x << "\n";
    }
}
