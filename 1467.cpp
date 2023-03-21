#include<bits/stdc++.h>
using namespace std;

void solve(){

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c;
    while(cin>>a>>b>>c){
        if(a==1 && (b==0 && c==0)){
            cout<<"A"<<endl;
        }
        if(a==0 && (b==1 && c==1)){
            cout<<"A"<<endl;
        }
        if(b==1 && (a==0 && c==0)){
            cout<<"B"<<endl;
        }
        if(b==0 && (a==1 && c==1)){
            cout<<"B"<<endl;
        }
        if(c==1 && (b==0 && a==0)){
            cout<<"C"<<endl;
        }
        if(c==0 && (b==1 && a==1)){
            cout<<"C"<<endl;
        }
        if(a==b && b==c){
            cout<<"*"<<endl;
        }
        
    }
    return 0;
}