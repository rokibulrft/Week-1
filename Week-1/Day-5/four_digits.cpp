#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0,m=n;
    while(m!=0){
        m=m/10;
        count++;
    }
    if(count==4){
        cout<<n;
    }else if(n==0){
        cout<<"0000";
    }
    else{
        for(int i=0;i<4-count;i++){
            cout<<'0';
        }
        cout<<n;
    }
    return 0;
}