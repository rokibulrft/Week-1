#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        freq[a]++;
    }
    int maxFreq = 0;
    for (auto f : freq) {
        maxFreq = max(maxFreq, f.second);
    }
    cout << maxFreq;
    return 0;
}
