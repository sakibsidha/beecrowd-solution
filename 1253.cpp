#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    int shift;
    cin>>s>>shift;
    for(int i=0;i<s.length();++i){
        char x=s[i];
        int pos=int(x)-shift;
        if(pos<65){
            int k=65-pos;
            pos=91-k;
        }
        printf("%c",pos);
    }
    printf("\n");
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }

    return 0;
}