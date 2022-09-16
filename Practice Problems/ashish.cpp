#include<bits/stdc++.h>
using namespace std;
int decreeCompliant(int input1, char* input2[]){
    int ans=0;
    for(int i=0;i<input1;i++){
        string current = input2[i];
        if(current[0]=='.' && current[current.size()-1]=='-'){
            int temp=0;
            for(int j=0;j<current.size() && temp>=0;j++){
                if(current[j]=='.'){
                    temp++;
                }
                else if(current[j]=='-'){
                    temp--;
                }
            }
            if(temp==0){
                ans++;
            }
        }
    }
    return ans;
}


int main(){
    char arr1[100];
    char arr2[100];
    scanf("%s", &arr1);
    scanf("%s", &arr2);
    char* input[2]={arr1,arr2};
    cout<<decreeCompliant(2,input);

}