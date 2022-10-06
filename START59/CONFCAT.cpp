#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n)
{
    vector<int> arr1;
    vector<int> arr2;
    bool arrSelect = false;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            arrSelect = !arrSelect;
            if (arrSelect)
            {
                arr1.push_back(arr[i]);
            }
            else
            {
                arr2.push_back(arr[i]);
            }
        }
        else
        {
            if (arrSelect)
            {
                arr1.push_back(arr[i]);
            }
            else
            {
                arr2.push_back(arr[i]);
            }
        }
    }
    if (arr1.size() == 0 || arr2.size() == 0)
    {
        cout << "-1\n";
        return;
    }
    else
    {
        cout << arr1.size() << '\n';
        for (int i = 0; i < arr1.size(); i++)
        {
            cout << arr1[i] << " ";
        }
        cout << '\n'
             << arr2.size() << '\n';
        for (int i = 0; i < arr2.size(); i++)
        {
            cout << arr2[i] << " ";
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        solve(arr, n);
    }
    return 0;
}