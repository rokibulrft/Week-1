#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,count=0,i;
    cin>>a>>b;
    for(i=a;i<=b;i++){
        if(i>=a && i<=b){
            count++;
        }
    }
    cout<<count;
}