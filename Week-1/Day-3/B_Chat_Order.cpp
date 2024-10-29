#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    deque<string> dq;
    map<string,int> mp;
    while(n--){
        string s;
        cin>>s;
        dq.push_front(s);
    }
    for(auto s:dq){
        if(mp.find(s)==mp.end()){
            mp[s]=0;
            cout<<s<<endl;
        }
    }
    return 0;
}