#include<bits/stdc++.h>
using namespace std;
    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    while(cin>>n && n!=0){
        vector<string> str;
        int c=2114,k=0,first=0;
        while(n--){
            string s;
            int a,b;
            cin>>s>>a>>b;
            if((a-b)<c){
                c=(a-b);
                first=k;
            }
            k++;
            str.push_back(s);
        }
        cout<<str[first]<<endl;
    }
    
    return 0;
}