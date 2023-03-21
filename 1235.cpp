#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    getline(cin,s);
    int len = s.length();
    int middle1=(len/2)-1;
    int middle2=middle1+1;
    for(int i=middle1;i>=0;--i){
        printf("%c",s[i]);
    }
    for(int i=len-1;i>=middle2;--i){
        printf("%c",s[i]);
    }
    printf("\n");
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin>>tt;
    cin.ignore();
    while(tt--){
        solve();
    }

    return 0;
}