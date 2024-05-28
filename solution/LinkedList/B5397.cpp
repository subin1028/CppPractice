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
            if(isalnum(c) == 0){
                if(t != P.begin()){
                    if(c == '<') {t--; cout << "<" << *t << endl;}
                    else if(c == '-'){
                        t--;
                        t = P.erase(t);
                        cout << "-" << *t << endl;
                    }
                    else if(t != P.end() && c == '>') {t++; cout << ">" << *t << endl;}
                }
            }
            else {
                P.insert(t, c);
                cout << "+" << c << *t << endl;
            }
        }

        for(auto c : P){
            cout << c;
        }
        cout << '\n';
        P.clear();
    }
}
