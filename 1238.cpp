#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s1,s2;
    cin>>s1>>s2;
    int len1=s1.length();
    int len2=s2.length();
    int size = (min(len1,len2));
    for(int i=0;i<size;++i){
        printf("%c%c",s1[i],s2[i]);
    }
    if(len1>len2){
        int i=size;
        while(s1[i]!='\0'){
            printf("%c",s1[i]);
            i++;
        }
    }
    if(len2>len1){
        int i=size;
        while(s2[i]!='\0'){
            printf("%c",s2[i]);
            i++;
        }
    }
    printf("\n");
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }

    return 0;
}