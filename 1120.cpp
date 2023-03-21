#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s1,s2;
    while(cin>>s1>>s2){
        if(s1=="0" && s2=="0"){
            break;
        }
        else{
            char s[200];
            int count=0,j=0;
            int len = s2.size();
            for(int i=0;i<len;++i){
                if(s1[0]==s2[i]){
                    count++;
                    continue;
                }
                else{
                    s[j]=s2[i];
                    j++;
                }
            }
            s[j]='\0';
            int c=0;
            for(int i=0;i<strlen(s);++i){
                if(s[i]=='0'){
                    c++;
                }
            }
            if(count==len){
                printf("0");
            }
            else if(c==strlen(s)){
                printf("0");
            }
            else if(s[0]=='0'){
                int start=0;
                for(int i=0;i<strlen(s);++i){
                    if(s[i]!='0'){
                        start=i;
                        break;
                    }
                }
                for(int i=start;i<strlen(s);++i){
                    printf("%c",s[i]);
                }
            }
            else{
                printf("%s",s);
            }
            printf("\n");  
        }
    }
    return 0;
}