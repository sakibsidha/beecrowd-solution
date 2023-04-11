#include<bits/stdc++.h>
using namespace std;
    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a,b;
    while(cin>>a>>b){
        int c=0;
        for(int i=a;i<=b;++i){
            string s=to_string(i);
            int flag=0;
            sort(s.begin(),s.end());
            for(int j=0;j<s.size();++j){
                if(s[j]==s[j+1]){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}