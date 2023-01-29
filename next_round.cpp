#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int m;
    for (int i = 0; i < k; ++i)
    {
        cin >>m;
        if (m== 0)
        {
            cout << i << endl;
            return 0;
        }
    }

    int b;
    for (int i = k; i < n; ++i)
    {
        cin >> b;
        if (b != m)
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << n << endl;
    return 0;
}