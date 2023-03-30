#include<bits/stdc++.h>
using namespace std;
double pi=3.1415926535897;
int main(){
    int a,b,c;
    while(cin>>a>>b>>c){
        double angleA,areaTri,semiPeri,radiiCircle,radiiSmallcle,areaSmallcle;
        angleA=acos((double(b*b)+double(c*c)-double(a*a))/double(2.0*b*c));
        radiiCircle=(double)a/(2.0*sin(angleA));
        semiPeri=((double)a+(double)b+(double)c)/2.0;
        areaTri=sqrt(semiPeri*(semiPeri-(double)a)*(semiPeri-(double)b)*(semiPeri-(double)c));
        radiiSmallcle=areaTri/semiPeri;
        areaSmallcle=pi*radiiSmallcle*radiiSmallcle;
        printf("%.4f %.4f %.4f\n",(pi*radiiCircle*radiiCircle)-areaTri,areaTri-areaSmallcle,areaSmallcle);  
    }
    return 0;
}