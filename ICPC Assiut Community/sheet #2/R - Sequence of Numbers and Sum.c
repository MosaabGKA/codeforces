#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (true)
    {
        int a, b, x, y, s=0;
        cin >> a >> b;
        if (a<=0 || b<=0)
        {
            break;
        }
        else if (a>b)
        {
            x=b;
            y=a;
        }
        else
        {
            x=a;
            y=b;
        }

        for (int i=x; i<=y; i++)
        {
            s+=i;
            cout << i << " ";
        }
        cout << "sum =" << s << "\n";
    }
}
