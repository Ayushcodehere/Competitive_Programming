#include<bits/stdc++.h>
using namespace std;

bool check(int a, int n){
    while(a>1){
        if(a%n==0){
            a/=n;
        }
        else{
            break;
        }
    }
    if(a==1){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int a,b;
        scanf("%d %d", &a, &b);
        int c=max(a,b);
        b=min(a,b);
        if(c%b==0){
            if(check(c,c/b) && check(b, c/b)){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}