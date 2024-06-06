#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

stack<pair<int, int>> S;
int cnt;

int main(void){
    S.push({100000001, 0});
    cin >> cnt;
    for(int i = 1; i <= cnt; i++){
        int num;
        cin >> num;

        while(S.top().X < num) S.pop();
        cout << S.top().Y << " ";
        S.push({num, i});
    }
}