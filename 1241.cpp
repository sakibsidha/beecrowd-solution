#include<bits/stdc++.h>
using namespace std;

void solve();

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}

void solve(){
    string a,b;
    cin>>a>>b;
    int lena = a.size();
    int lenb = b.size();
    if(lenb>lena){
        cout<<"nao encaixa"<<endl;
        return;
    }
    int j=lena-1,flag=0;
    for(int i=lenb-1;i>=0;--i){
        if(b[i]!=a[j]){
            flag=1;
            break;
        }
        else{
            j--;
        }
    }
    if(flag==0){
        cout<<"encaixa"<<endl;
    }
    else{
        cout<<"nao encaixa"<<endl;
    }
}