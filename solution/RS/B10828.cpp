#include <bits/stdc++.h>
using namespace std;

int main(void){
    int count;
    cin >> count;

    string cmd;

    stack<int> S;

    for(int i = 0; i < count; i++){
        cin >> cmd;
        if(cmd == "push"){
            int num;
            cin >> num;
            S.push(num);
        }
        else if(cmd == "top"){
            if(S.empty()){
                cout << -1 << endl;
            }
            else cout << S.top() << endl;
        }

        else if(cmd == "size") cout << S.size() << endl;
        else if(cmd == "pop"){
            if(S.empty()){
                cout << -1 << endl;
            }
            else {
                cout << S.top() << endl;
                S.pop();
            }
        }
        else if(cmd == "empty") (S.empty())? cout << 1 << endl : cout << 0 << endl;
    }
}