#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    float w,l;
    cin>>w>>l;
    int i=1;
    while(true){
        float x=w*i;
        float y=x/l;
        float z=i-y;
        if(z>=1){
            cout<<i<<endl;
            break;
        }
        else{
            i++;
        }
    }

    return 0;
}
