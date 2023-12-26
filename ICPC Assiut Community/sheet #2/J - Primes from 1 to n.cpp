#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    for (int a=2; a<=x; a++)
    {
        bool prime = true;
        for (int b=2; b<a; b++)
        {
            if (a%b==0)
            {
                prime = false;
                break;
            }
        }
        if (prime)
        {
            cout << a << " ";
        }
    }
}
