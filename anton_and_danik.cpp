#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    char c;
    cin>>c;
    int a = 0;
    int  d = 0;

        for (int i=0; i<n; i++)
        {
            
            if (c == 'A')
                a = a + 1;
            else
                d = d + 1;
        }

        if (a > d)
            cout << "Anton" << endl;
        else if (d > a)
            cout << "Danik" << endl;
        else
            cout << "Friendship" << endl;
    

    return 0;
}