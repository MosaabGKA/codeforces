#include <iostream>
using namespace std;
 
int main()
{
    int x=0;
    while (x!=1999)
    {
        cin >> x;
        if (x==1999)
        {
            cout << "Correct" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    return 0;
}
