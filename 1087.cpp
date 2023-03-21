#include<bits/stdc++.h>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    while(cin>>r1>>c1>>r2>>c2){
        if(r1==0 && c1==0 && r2==0 && c2==0){
            break;
        }
        else{
            if(r1==r2 && c1==c2){
                cout<<"0"<<endl;
                goto end;
            }
            int difr,difc;
            difr=abs(r1-r2);
            difc=abs(c1-c2);
            if(r1==r2 || c1==c2){
                cout<<"1"<<endl;
            }
            else if(difr==difc){
                cout<<"1"<<endl;
            }

            else{
                cout<<"2"<<endl;
            }
            end:
            int skipThis; //this is nothing
        }
    }
    return 0;
}