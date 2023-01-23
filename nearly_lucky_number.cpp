
#include <iostream>
 
using namespace std;
 
int main()
{
    long long n;
    cin >> n;
    int ct = 0;
    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            ct += 1;
        }
        n /= 10;
    }
    if (ct==4||ct==7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}