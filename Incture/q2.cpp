#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int three=8;
    int two=(m-2)*8;
    int one=(m*m-(m-2)*4-4)*6;
    switch(n){
        case 1:
            cout<<one;
            break;
        case 2:
            cout<<two;
            break;
        case 3:
            cout<<three;
            break;
        case 0:
            cout<<m*m*m-one-two-three;
            break;
    }
    return 0;
}
