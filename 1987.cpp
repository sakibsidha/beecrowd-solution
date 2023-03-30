#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a;
    string s;
    while(cin>>a>>s){
        int sum=0;
        for(int i=0;i<a;++i){
        sum+=(int(s[i])-48);
        }
        if(sum%3==0){
            cout<<sum<<" sim"<<endl;
        }
        else{
            cout<<sum<<" nao"<<endl;
        }
    }
    return 0;
}