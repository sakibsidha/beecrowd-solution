#include<bits/stdc++.h>
using namespace std;
    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    int s{},b{},a{},ss{},bb{},aa{};
    while(n--){
        string str;
        int _s,_b,_a,_ss,_bb,_aa;
        cin>>str>>_s>>_b>>_a>>_ss>>_bb>>_aa;
        s+=_s; b+=_b; a+=_a;
        ss+=_ss; bb+=_bb; aa+=_aa; 
    }
    float a_avg,b_avg,s_avg;
    s_avg=((float)ss/(float)s)*100.0;
    b_avg=((float)bb/(float)b)*100.0;
    a_avg=((float)aa/(float)a)*100.0;
    cout<<fixed<<setprecision(2)<<"Pontos de Saque: "<<s_avg<<" %."<<endl;
    cout<<fixed<<setprecision(2)<<"Pontos de Bloqueio: "<<b_avg<<" %."<<endl;
    cout<<fixed<<setprecision(2)<<"Pontos de Ataque: "<<a_avg<<" %."<<endl;

    return 0;
}