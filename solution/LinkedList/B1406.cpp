#include <bits/stdc++.h>
using namespace std;

int main(void){
    list<char> L = {};
    string s;
    int count;
    cin >> s;
    cin >> count;
    for (auto e: s){
        L.push_back(e);
    }

    auto t = L.end();
    t--;

    for (int i = count; i>0; i--){
        string c;
        cin >> c;
        if(c == "L" && t != --L.begin()) t--;
        else if (c == "D" && t != --L.end()) t++;
        else if (c == "B" && t != --L.begin()) {
            t = L.erase(t);
            t--;
        }
        else if(c == "P"){
            char add;
            cin >> add;
            t++;
            L.insert(t, add);
            t--;
        }
    }
    
    for (auto e : L) cout << e;
}