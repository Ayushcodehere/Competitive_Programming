#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> data;
    int t;
    cin >> t;
    long long ph;
    string name;
    for (int i = 0; i < t; i++)
    {
        cin >> name;
        cin >> ph;
        data[name] = ph;
    }
    map<string, int>::iterator itr;
    while (t--)
    {
        cin>>name;
        if(data.find(name)!=data.end()){
            cout<<name<<"="<<data[name]<<'\n';
        }
        else{
            cout<<"Not found\n";
        }
    }
    return 0;
}