#include<bits/stdc++.h>
using namespace std;
 
int main() {
    long long int n, sum = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    if (sum % 2 == 0) 
        cout << sum;
    else {
        int min_odd = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (v[i] % 2 != 0) {
                min_odd = min(min_odd, v[i]);
            }
        }
        cout << sum - min_odd;
    }
}