#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
    string even = "", odd = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (i % 2 == 0)
        {
            even += s.substr(i, 1);
        }
        else
        {
            odd += s.substr(i, 1);
        }
    }
    cout << even << " "<< odd << '\n';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}