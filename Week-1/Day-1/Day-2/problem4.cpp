#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    unordered_map<string, string> handle_map;
    unordered_map<string, string> final_handle_map;
    for (int i = 0;i < q;i++) {
        string old_handle, new_handle;
        cin >> old_handle >> new_handle;
        if (handle_map.find(old_handle) != handle_map.end()) {
            string original_handle = handle_map[old_handle];
            handle_map.erase(old_handle);
            handle_map[new_handle] = original_handle;
            final_handle_map[original_handle] = new_handle;
        } else {
            handle_map[new_handle] = old_handle;
            final_handle_map[old_handle] = new_handle;
        }
    }
    cout << final_handle_map.size() << endl;
    for (const auto &entry : final_handle_map) {
        cout << entry.first << " " << entry.second << endl;
    }
    return 0;
}
