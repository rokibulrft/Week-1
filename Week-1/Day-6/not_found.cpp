#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int freq[26]={0};
    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }
    int pawa_gese=0,wh;
    for(char i=0;i<26;i++){
        if(freq[i]==0){
            wh=i;
            pawa_gese=1;
            break;
        }
    }
    if(pawa_gese) cout<<(char)(wh+'a');
    else cout<<"None";
}