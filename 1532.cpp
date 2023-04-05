#include<bits/stdc++.h>
using namespace std;
    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int item,n;
    while(cin>>item>>n && (item!=0 && n!=0)){
        vector<int> outcomes;
        int cnt=0;
        while(true){
            if(n==0) break;
            for(int i=n;i>=1;--i){
                for(int j=1;j<=i;++j){
                    outcomes.push_back(cnt+=i);
                }
            }
            cnt=0;
            n--;
        }
        int flag=0;
        for(int i=0;i<outcomes.size();++i){
            if(outcomes[i]==item){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<"possivel"<<endl;
        }
        else{
            cout<<"impossivel"<<endl;
        }
    }
    return 0;
}