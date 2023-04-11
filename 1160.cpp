#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c = 0;
    double roa, rob, x, y;
    cin >> a >> b >> roa >> rob;
    x = (100.0 + roa) / 100.0;
    y = (100.0 + rob) / 100.0;
    
    while(true){
        c++;
        a = (double)a * x;
        b = (double)b * y;
        if(a > b) break; 
        if(c > 100) break; 
    }

    if(c>100) cout << "Mais de 1 seculo." << endl;
    else cout << c << " anos." << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }

    return 0;
}