#include <bits/stdc++.h>
using namespace std;

char ki_boshano_jay(char ch) {
    for (char i = 'a'; i <= 'z'; i++) {
        if (ch != i) return i;
    }
    return 'a';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s.size() == 1) {
            cout << s + ki_boshano_jay(s[0]) << endl;
        } else {
            bool inserted = false;
            for (int i = 0; i < s.size() - 1; i++) {
                if (s[i] == s[i + 1]) {
                    s.insert(i + 1, 1, ki_boshano_jay(s[i]));
                    inserted = true;
                    break;
                }
            }
            if (!inserted) s += ki_boshano_jay(s[s.size()-1]);
            cout << s << endl;
        }
    }
    return 0;
}
