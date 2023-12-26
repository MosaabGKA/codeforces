#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i=1; i<=4*n; i++)
    {
        i % 4 == 0 ? cout << "PUM\n" : cout << i << " ";
    }
}
