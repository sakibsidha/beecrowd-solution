#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    float l,h,r1,r2;
    while(cin>>l>>h>>r1>>r2){
        if(l==0 && h==0 && r1==0 && r2==0){
            break;
        }
        else{
            float r2x=l-r2;
            float r2y=h-r2;
            float dis = pow(abs(r1-r2x),2)+pow(abs(r1-r2y),2);
            float actdis = sqrt(dis);
            if(2*r1<=l && 2*r1<=h && 2*r2<=l && 2*r2<=h && actdis>=(r1+r2)){
                cout<<"S"<<endl;
            }
            else{
                cout<<"N"<<endl;
            }

        }
    }

    return 0;
}