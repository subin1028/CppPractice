#include <bits/stdc++.h>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);

    queue<int> Q;
    int num;
    int top;
    cin >> num;

    for(int i = 1; i < num+1; i++){
        Q.push(i);
    }

    while(Q.size() > 1){
        Q.pop();
        top = Q.front();
        Q.pop();
        Q.push(top);
    }

    cout << Q.front();
}