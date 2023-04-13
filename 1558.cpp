#include<bits/stdc++.h>
using namespace std;
const int n=110;
int a[n];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=1;i<=100;++i){
        a[i]=i*i;
    }
    int n;
    while(cin>>n){
        int sr=sqrt(n);
        int flag=0;
        for(int i=0;i<=sr;++i){
            for(int j=0;j<=sr;++j){
                if(a[i]+a[j]==n){
                    flag=1;
                }
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}