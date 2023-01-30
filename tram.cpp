
#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    int c, d=0;
    cin>>n;
    while (n--)
    {
        cin>>a>>b;
        c -= a;
        c += b;
        if (c > d)
        {
            d = c;
        }
    }

    cout<<d<<endl;
    return 0;
}
