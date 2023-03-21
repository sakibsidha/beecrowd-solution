#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    while(getline(cin,s)){
        if(s=="*"){
            break;
        }
        else{
            int flag = 0;
            for(int i=0;i<s.length();++i){
                if(s[i]==' '){
                    if(s[i+1]==s[0] || s[i+1]==tolower(s[0]) || s[i+1]==toupper(s[0])){
                        flag=0;
                    }
                    else{
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==0){
                printf("Y\n");
            }
            else{
                printf("N\n");
            }
        }
    }

    return 0;
}