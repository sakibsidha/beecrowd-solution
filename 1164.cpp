#include<bits/stdc++.h>
using namespace std;
    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int> div;
        for(int i=1;i<n;++i){
            if(n%i==0){
                div.push_back(i);
            }
        }
        int sum=accumulate(div.begin(),div.end(),0);
        if(sum==n){
            cout<<n<<" eh perfeito"<<endl;
        }
        else{
            cout<<n<<" nao eh perfeito"<<endl;
        }
    }
    
    return 0;
}