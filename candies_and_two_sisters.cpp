

// There are two sisters Alice and Betty.You have n candies.You want to distribute these n candies between two sisters in such a way that :
// Alice will get a(a > 0) candies;
// Betty will get b(b > 0) candies;
// each sister will get some integer number of candies;
// Alice will get a greater amount of candies than Betty(i.e.a > b);
// all the candies will be given to one of two sisters(i.e.a + b = n).
// Your task is to calculate the number of ways to distribute exactly n candies between sisters in a way described above. Candies are indistinguishable.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double n;
    long long int ans;
    cin >> t;
    while (t--)
    {
        ans = 0;
        cin >> n;
        ans = ceil((n / 2) - 1);
        cout << ans << endl;
    }
    return 0;
}
