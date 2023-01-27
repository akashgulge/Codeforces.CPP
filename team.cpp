#include <iostream>

using namespace std;

int main()
{
    int n, P, V, T;
    int ct=0;
    cin >> n;
    while (n--)
    {
        cin >> P>> V>> T;
        if (P+ V + T>= 2)
        {
            ct += 1;
        }
    }
    cout << ct << endl;
    return 0;
}