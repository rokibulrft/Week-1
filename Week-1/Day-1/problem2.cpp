#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count_front=0,count_back=0;
        for(int i=0;i<n;i++){
            if(s[i]=='W') count_front++;
            else break;
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='W') count_back++;
            else break;
        }
        cout<<n-count_front-count_back<<endl;
    }
    return 0;
}