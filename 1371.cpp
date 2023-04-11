#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin>>n && n!=0){
        for(int i=1;i*i<=n;++i){
            printf("%d",i*i);
            if((i+1)*(i+1)<=n){
                printf(" ");
            }
            else{
                printf("\n");
            }
        }
    }
    return 0;
}