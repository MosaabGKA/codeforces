#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, d=1, x=0;
    cin >> n;

    while (n/(pow(10, d)) > 1)
    {
        d++;
    }

    for (int i=1; i<=d; i++)
    {
        x+=(int)(n % (int)pow(10, i) / pow(10, i-1)) * pow(10, d-i);
    }
    cout << x << endl;
    x == n ? cout << "YES" : cout << "NO";

    return 0;
}
