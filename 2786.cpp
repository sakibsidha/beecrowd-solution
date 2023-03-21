#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b;
    cin>>a>>b;
    cout<<(a*b)+((a-1)*(b-1))<<endl<<((b-1)*2)+((a-1)*2)<<endl;
    
    return 0;
}