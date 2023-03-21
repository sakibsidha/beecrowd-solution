#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    while(getline(cin,s)){
        int j=1;
        for(int i=0;i<s.length();++i){
            char x=s[i];
            if(x==' '){
                printf(" ");
                continue;
            }
            else{
                if(j%2==0){
                    printf("%c",tolower(x));
                    j++;
                }
                else{
                    printf("%c",toupper(x));
                    j++;
                }
            }
        }
        printf("\n");
    }

    return 0;
}