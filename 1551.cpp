#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    getline(cin,s);
    char str[1001];
    int j=0;
    for(int i=0;i<s.length();++i){
        if(s[i]==' ' || s[i]==','){
            continue;
        }
        else{
            str[j]=s[i];
            j++;
        }
    }
    str[j]='\0';
    sort(str,str+strlen(str));
    int c=0;
    for(int i=0;i<strlen(str);++i){
        if(str[i]!=str[i+1]){
            c++;
        }
    }
    if(c==26){
        printf("frase completa\n");
    }
    else if(c>=13 && c<26){
        printf("frase quase completa\n");
    }
    else{
        printf("frase mal elaborada\n");
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin>>tt;
    cin.ignore();
    while(tt--){
        solve();
    }
    
    return 0;
}
