#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;++i){
        cin>>b[i];
    }
    for(int i=0;i<n;++i){
        while(b[i]%3!=0){
            b[i]=b[i]-1;
        }
    }
    int sum=0;
    for(int i=0;i<n;++i){
        sum+=b[i];
    }
    cout<<sum<<endl;
    return 0;
}