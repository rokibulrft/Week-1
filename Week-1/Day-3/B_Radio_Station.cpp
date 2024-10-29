#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    map<string, string> serverMap;
    for (int i = 0; i < n; i++) {
        string name, ip;
        cin >> name >> ip;
        serverMap[ip] = name;
    }
    for (int i = 0; i < m; i++) {
        string commandLine;
        cin >> ws;
        getline(cin, commandLine);
        string ip = commandLine.substr(commandLine.find(' ') + 1);
        ip = ip.substr(0, ip.find(';'));
        cout << commandLine << " #" << serverMap[ip] << endl;
    }
    return 0;
}
