#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    int got_coin=0;
    for(int i=0;i<2;i++){
        if(a>b){
            got_coin=got_coin+a;
            a--;
        }else{
            got_coin=got_coin+b;
            b--;
        }
    }
    cout<<got_coin;
}