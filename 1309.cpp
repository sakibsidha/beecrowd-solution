#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s,s2;
    while(getline(cin,s),getline(cin,s2)){
        int len = s.length();
        string scopy;
        int j=0,n=4;
        for(int i = len-1;i>=0;--i){
            if(j==0){
                scopy[j]='.';
                j++;
            }
            if(j==n){
                scopy[j]=',';
                j++;
                n=n+4;
            }
            scopy[j]=s[i];
            j++;
        }
        scopy[j]='$';
        for(int i=j;i>=0;--i){
            printf("%c",scopy[i]);
        }
        if(s2.length()<2){
            printf("0");
        }
        for(int i = 0; i < s2.length(); ++i)
            printf("%c", s2[i]);
        printf("\n");
    }
    return 0;
}