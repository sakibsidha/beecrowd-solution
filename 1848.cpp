#include<bits/stdc++.h>
using namespace std;
    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    int c=0,sum=0;
    while(cin>>s){
        
        if(s=="caw"){
            string waste;
            cin>>waste;
            cout<<sum<<endl;
            sum=0;
        }
        else{
            if(s[0]=='*'){
                sum+=4;
            }
            if(s[1]=='*'){
                sum+=2;
            }
            if(s[2]=='*'){
                sum+=1;
            }
        }
    }
    
    return 0;
}