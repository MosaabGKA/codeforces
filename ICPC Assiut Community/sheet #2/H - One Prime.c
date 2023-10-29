#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    bool prime = true;
    for (int i=2; i<x; i++)
    {
        if (x%i==0)
        {
            prime = false;
            break;
        }
    }
    prime ? cout<<"YES" : cout<<"NO";

}
