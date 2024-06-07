#include <bits/stdc++.h>
using namespace std;

queue<int> Q;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int cnt;
    cin >> cnt;
    for(int i = 0; i < cnt; i++){
        string cmd;
        cin >> cmd;
        if(cmd == "push"){
            int num;
            cin >> num;
            Q.push(num);
        }
        else if(cmd == "pop"){
            if(Q.empty()){cout << -1;}
            else {cout << Q.front(); Q.pop();}
            cout << endl;
        }
        else if(cmd == "front"){
            cout << (Q.empty() ? -1 : Q.front()) << endl;
        }
        else if(cmd == "back"){
            cout << (Q.empty() ? -1 : Q.back()) << endl;
        }
        else if(cmd == "size"){
            cout << Q.size() << endl;
        }
        else if(cmd == "empty"){
            cout << (Q.empty() ? 1 : 0) << endl;
        }
    }
}