#include <iostream>
using namespace std;

int main()
{
    int n1, n2, m, d;
    cin >> n1 >> n2;
    n1<=n2 ? m=n1 : m=n2;

    for (int i=1; i<=m; ++i)
    {
        if (n1%i==0 && n2%i==0)
        {
            d=i;
        }
    }
    cout << d;

    return 0;
}
