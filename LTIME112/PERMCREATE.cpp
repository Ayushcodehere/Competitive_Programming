#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    if (n < 5)
    {
        cout << -1 << "\n";
    }
    else
    {
        int plus, minus;
        if (n % 2 == 0)
        {
            plus = n / 2;
            minus = plus - 1;
        }
        else
        {
            minus = n / 2;
            plus = minus + 1;
        }
        int itr = 1;
        for (int i = 0; i < n; i++)
        {
            cout << itr << " ";
            if (i % 2 == 0)
            {
                itr += plus;
            }
            else
            {
                itr -= minus;
            }
        }
        cout << "\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}