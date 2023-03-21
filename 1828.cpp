#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    string sheldon,raj;
    cin>>sheldon>>raj;
    int s=0;

    if(sheldon=="tesoura" && (raj=="papel" || raj=="lagarto")){
        s=1;
    }
    if(sheldon=="papel" && (raj=="pedra" || raj=="Spock")){
        s=1;
    }
    if(sheldon=="pedra" && (raj=="lagarto" || raj=="tesoura")){
        s=1;
    }
    if(sheldon=="lagarto" && (raj=="Spock" || raj=="papel")){
        s=1;
    }
    if(sheldon=="Spock" && (raj=="tesoura" || raj=="pedra")){
        s=1;
    }
    if(sheldon==raj){
        s=2;
    }


    if(s==1){
        printf("Caso #%d: Bazinga!\n",n);
    }
    if(s==2){
        printf("Caso #%d: De novo!\n",n);
    }
    if(s==0){
        printf("Caso #%d: Raj trapaceou!\n",n);
    }
    
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt,n=1;
    cin>>tt;
    while(tt--){
        solve(n);
        n++;
    }

    return 0;
}