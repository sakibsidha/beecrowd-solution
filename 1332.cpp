#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int len = s.size();
    int one=0,two=0;
    if(len==5){
        cout<<"3"<<endl;
        return;
    }
    if(s[0]=='o' && s[1]=='n' || s[0]=='o' && s[2]=='e' || s[1]=='n' && s[2]=='e'){
        cout<<"1"<<endl;
    }
    else{
        cout<<"2"<<endl;
    }
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