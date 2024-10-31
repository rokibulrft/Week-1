#include<bits/stdc++.h>
using namespace std;

char find_mirror(vector<char> v,char ch){
    int size=v.size();
    for(int i=0;i<size;i++){
        if(v[i]==ch) return v[size-1-i];
    }
}

string decode(string s,int n,vector<char>v){
    for(int i=0;i<n;i++){
        s[i]=find_mirror(v,s[i]);
    }
    return s;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        set<char> st;
        vector<char> v;
        int n;
        cin>>n;
        string s,r;
        cin>>s;
        for(int i=0;i<n;i++){
            st.insert(s[i]);
        }
        for(char x:st){
            v.push_back(x);
        }
        cout<< decode(s,n,v)<<endl;
    }
    
}