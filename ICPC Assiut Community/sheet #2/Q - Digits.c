#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, x;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> x;
        string s = to_string(x);
        for (int j=s.length()-1; j>0; j--)
        {
            cout << s[j] << " ";
        }
        cout << s[0] <<"\n";
    }
}
