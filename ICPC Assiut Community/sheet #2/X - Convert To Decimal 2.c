#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, m, s;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        m = 0, s = 0;
        cin >> x;
        while(x>0)
        {
            if(x%2==1)
            {
                m++;
                x = (x-1)/2;
            }
            else
            {
                x = x/2;
            }
        }
        for (int j=0; j<m; j++)
        {
            s = s + pow(2, j);
        }
        cout << s << "\n";
    }
}
