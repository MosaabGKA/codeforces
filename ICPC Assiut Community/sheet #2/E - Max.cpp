#include <iostream>
using namespace std;

int main()
{
    int n=0, x=0, m=0;

    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        cin >> x;
        if (x>m){
            m=x;
        }
    }
    cout << m << endl;

    return 0;
}
