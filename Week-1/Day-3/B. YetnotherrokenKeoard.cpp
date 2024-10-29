#include <bits/stdc++.h>
using namespace std;

int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while(t--)
    {
        string s, news;
        cin >> s;
        int lc = 0, up = 0;
        reverse(s.begin(),s.end());
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'b') lc++; 
            if(s[i] == 'B') up++;

            if(s[i] != 'b' && s[i] != 'B')
            {
                if(lc > 0 && islower(s[i])) 
                {
                    lc--;
                    continue;
                }
                if(up > 0 && isupper(s[i])) 
                {
                    up--;
                    continue;
                }
                news.push_back(s[i]);
            }
            
        }

        if(news.empty()) cout << ' ' << '\n';
        else {
            reverse(news.begin(),news.end());
            cout << news << '\n';
        } 
    }
    return 0;
}