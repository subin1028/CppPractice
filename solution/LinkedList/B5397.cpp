#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    list<char> P;
    int count;
    cin >> count;
    for (int i = 0; i < count; i++){
        string str;
        cin >> str;
        auto t = P.begin();
        for(auto c: str){
            if(c == '<') {
                if(t != P.begin()) t--;
            }
            else if(c == '-'){
                if(t != P.begin()){
                    t--;
                    t = P.erase(t);
                }     
            }
            else if(c == '>') {
                if(t != P.end()) t++;
            }
            else {
                P.insert(t, c);
            }
        }
            
        for(auto c : P){
            cout << c;
        }
        cout << '\n';
        P.clear();
    }
}

