#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int multiple;
    for(int i=1;;i++){
        multiple=c*i;
        if(multiple>b){
            cout<<"-1";
            break;
        }else if(multiple>=a && multiple<=b){
            cout<<multiple;
            break;
        }
    }
}