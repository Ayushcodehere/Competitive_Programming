#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int factorial(int n)
{
    if (n == 0)
        return 1;
    int factorial = 1;
    for (int i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}

int nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ele, gp = 0;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            arr.push_back(ele);
        }
        sort(arr.begin(), arr.end());
        int i=0,j=0;
        while(i<n && j<=n){
            if(arr[j]==arr[i]){
                j++;
                continue;
            }
            else if(arr[j]!=arr[i]){
                if((j-i)==1){
                    i=j;
                    continue;
                }
                else{
                    gp+=nCr(j-i,2);
                    i=j;
                }
            }
        }
        cout<<gp<<endl;
    }
    return 0;
}
