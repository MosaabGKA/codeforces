#include <bits/stdc++.h>
using namespace std;

int main()
{
    long a, b, s=0;
    cin >> a >> b;

    for (int i=a; i<=b; i++)
    {
        bool lucky = true;
        string n = to_string(i);
        for (int ii=0; ii<n.length(); ii++)
        {
            if ( (int(n[ii])!= 52) && (int(n[ii])!= 55) )
            {
//                cout << int(n[ii]);
                lucky = false;
                break;
            }
        }
        if (lucky)
        {
            s = i;
            cout << s << " ";
        }
    }
    if (s==0) cout << -1;
}
