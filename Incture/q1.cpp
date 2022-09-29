#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin,a);
    int n;
    cin>>n;
    string state=a.substr(0,2);
    char series1=a[3];
    char series2=a[4];
    int series;
    if(a[5]>='0' && a[5]<='9'){
        series=stoi(a.substr(5,5));
    }
    else{
        series=stoi(a.substr(6,5));
    }
    bool check=false;
    if(series2>='A' && series2<='Z'){
        check=true;
    }
    while(n--){
        cout<<state<<" ";
        series++;
        if(series==100000){
            series=00001;
            if(check){
                if(series2!='Z'){
                    series2++;
                }
                else{
                    series1++;
                    series2='A';
                }
            }
            else{
                if(series1=='Z'){
                    series2='A';
                    check=true;
                    series1='A';
                }
                else{
                    series1++;
                }
            }
        }
        cout<<series1;
        if(check){
            cout<<series2;
        }
        cout<<" ";
        printf("%05d\n", series);

    }
    return 0;
}
