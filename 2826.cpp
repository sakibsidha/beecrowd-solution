#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s1,s2;
    cin>>s1>>s2;
    int len1=s1.length();
    int len2=s2.length();
    if(s1==s2){
        cout<<s1<<endl<<s2<<endl;
        goto end;
    }
    if(len1==len2){
        int i=0;
        while(true){
            if(s1[i]==s2[i]){
                    i++;
                    continue;
            }
            else if(int(s1[i])<int(s2[i])){
                cout<<s1<<endl<<s2<<endl;
                goto end;
            }
            else{
                cout<<s2<<endl<<s1<<endl;
                goto end;
            }
        }
    }
    else{
        int minlen=min(len1,len2);
        for(int i=0;i<minlen;++i){
            if(s1[i]==s2[i]){
                continue;
            }
            else if(int(s1[i])<int(s2[i])){
                cout<<s1<<endl<<s2<<endl;
                goto end;
            }
            else{
                cout<<s2<<endl<<s1<<endl;
                goto end;
            }
        }
        if(len1>len2){
            cout<<s2<<endl<<s1<<endl;
        }
        if(len2>len1){
            cout<<s1<<endl<<s2<<endl;
        }
    }
    end:
    return 0;
}