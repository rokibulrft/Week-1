#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    set<string> s;
    while(t--){
        string name;
        cin>>name;
        if(s.find(name)==s.end()){
            s.insert(name);
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}
