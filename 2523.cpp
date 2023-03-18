#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    while(getline(cin,s)){
        int n,pos;
        cin>>n;
    
        for(int i=0;i<n;++i){
           cin>>pos;
           cout<<s[pos-1];
        }
        cout<<endl;
        cin.ignore();
    }

    return 0;
}