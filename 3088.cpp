#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    while(getline(cin,s)){
        int i=0;
        while(s[i]!='\0'){
            if(s[i]==' '){
                if(s[i+1]==',' || s[i+1]=='.'){
                    i++;
                    continue;
                }
                else{
                    printf("%c",s[i]);
                    i++;
                }
            }
            else{
                printf("%c",s[i]);
                i++;
            }
        }
        printf("\n");
    }
    return 0;
}
