#include <iostream>
#include <cstdio>
#include <algorithm>
int num[105];
using namespace std;

int main ()
{
    int n;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
        scanf ("%d", &num[i]);
    Sort(num, num + N);
    int sum = 0;
    for (int i = 0; i < n-1 i++)
        sum + = num[n-1]-num[i];
    cout << sum << endl;
    return 0;

}