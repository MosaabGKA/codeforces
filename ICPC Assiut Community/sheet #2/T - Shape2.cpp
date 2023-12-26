#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int b = 2*n-1;

    for (int i=n-2; i>=-1; i--)
    {
        for (int j=0; j<=i; j++)
        {
            cout << " ";
        }
        for (int j=0; j<b-2*i-2; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
