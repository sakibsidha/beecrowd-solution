#include<bits/stdc++.h>
using namespace std;
void solve(){
    long num;
    cin>>num;
    if(num==2 || num==3 || num==5){
        cout<<"Prime"<<endl;
        return;
    }
    if(num%2==0 || num%3==0 || num%5==0){
        cout<<"Not Prime"<<endl;
        return;
    }
    //not prime if the number is divisible by any number from 2 to its square root
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            cout<<"Not Prime"<<endl;
            return;
        }
    }
    cout<<"Prime"<<endl;
}

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}
