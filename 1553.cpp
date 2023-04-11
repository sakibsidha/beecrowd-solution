#include<bits/stdc++.h>
using namespace std;
const int p=101;
int hsh[p];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    while(cin>>n>>k){
        if(n==0 && k==0){
            break;
        }
        memset(hsh, 0, sizeof(hsh));
        int a[n];   
        for(int i=0;i<n;++i){
            cin>>a[i];
            hsh[a[i]]++;
        }
        int c=0;
        for(int i=1;i<=p;++i){
            if(hsh[i]>=k){
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}