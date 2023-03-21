#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c,na,nb,nc,angry=0;
    cin>>a>>b>>c>>na>>nb>>nc;
    if(a<na){
        angry+=(na-a);
    }
    if(b<nb){
        angry+=(nb-b);
    }
    if(c<nc){
        angry+=(nc-c);
    }
    cout<<angry<<endl;
    return 0;
}