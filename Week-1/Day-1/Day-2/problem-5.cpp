#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> words1(n), words2(n), words3(n);
        unordered_map<string, int> word_count;
        for (int i = 0; i < n; i++) {
            cin >> words1[i];
            word_count[words1[i]]++;
        }
        for (int i = 0; i < n; i++) {
            cin >> words2[i];
            word_count[words2[i]]++;
        }
        for (int i = 0; i < n; i++) {
            cin >> words3[i];
            word_count[words3[i]]++;
        }
        int points1 = 0, points2 = 0, points3 = 0;
        for (const auto& word : words1) {
            if (word_count[word] == 1) points1 += 3;
            else if (word_count[word] == 2) points1 += 1;
        }
        for (const auto& word : words2) {
            if (word_count[word] == 1) points2 += 3;
            else if (word_count[word] == 2) points2 += 1;
        }
        for (const auto& word : words3) {
            if (word_count[word] == 1) points3 += 3;
            else if (word_count[word] == 2) points3 += 1;
        }
        cout << points1 << " " << points2 << " " << points3 << endl;
    }
    return 0;
}
