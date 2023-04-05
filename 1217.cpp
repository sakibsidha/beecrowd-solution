#include<bits/stdc++.h>
using namespace std;
    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int tt;
    cin>>tt;
    int temp=tt;
    int day=1;
    float kgs=0.0,rs=0.0;
    while(tt--){
        float x;
        string s;
        cin>>x;
        cin.ignore();
        getline(cin,s);
        int len = s.size();
        int spc=0;
        for(int i=0;i<len;++i){
            if(s[i]==' '){
                spc++;
            }
        }
        cout<<"day "<<day<<": "<<spc+1<<" kg\n";
        kgs+=(float)(spc+1);
        rs+=x;
        day++;
    }
    float avg_kgs=kgs/(float)temp;
    float avg_rs=rs/(float)temp;
    cout<<fixed<<setprecision(2)<<avg_kgs<<" kg by day\n";
    cout<<fixed<<setprecision(2)<<"R$ "<<avg_rs<<" by day\n";
    
    return 0;
}