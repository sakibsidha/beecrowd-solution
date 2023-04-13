#include<bits/stdc++.h>
using namespace std;
    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int tt;
    scanf("%d",&tt);
    while(tt--){
        int n;
        scanf("%d",&n);
        if(n==0){
            printf("1\n");
            continue;
        }
        double ni=(double)n/4.0;
        int mi=int(ni);
        double oi=ni-(double)mi;
        if(oi==0.25){
            printf("7\n");
            continue;
        }
        if(oi==0.5){
            printf("9\n");
            continue;
        }
        if(oi==0.75){
            printf("3\n");
            continue;
        }
        if(oi==0){
            printf("1\n");
            continue;
        }
    }
    
    return 0;
}