#include<bits/stdc++.h>
using namespace std;

void solve(){
    string A,B;
    cin>>A>>B;
    int len=A.size();
    int sum=0;
    for(int i=0;i<len;++i){
        int a,b;
        a=int(A[i]);
        b=int(B[i]);
        if(a>b){
            a-=26;
        }
        sum+=abs(a-b);
    }
    cout<<sum<<endl;
}

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}