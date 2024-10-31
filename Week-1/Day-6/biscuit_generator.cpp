#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, t;
    cin >> a >> b >> t;
    int count_biscuit = 0;
    int i = 1;
    while(a * i <= t + 0.5){
        count_biscuit += b;
        i++;
    }
    cout << count_biscuit;
}