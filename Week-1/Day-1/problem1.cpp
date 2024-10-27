#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int sumS=0,sumD=0;
    int turn=1;
    while(v.size()!=0){
        int i=0,j=v.size()-1,take;
        if(v[i]>v[j]){
            take=v[i];
            v.erase(v.begin());
        }else{
            take=v[j];
            v.pop_back();
        }
        if(turn%2==1){
            sumS=sumS+take;
        }else{
            sumD=sumD+take;
        }
        turn++;
    }
    cout<<sumS<<" "<<sumD;
}