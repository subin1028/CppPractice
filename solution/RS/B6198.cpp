#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);

    stack<int> S;
    ll sum = 0;
    ll N;
    cin >> N;

    while(N--){
        int num;
        cin >> num;
        while(!S.empty() && S.top() <= num) S.pop();
        sum += S.size();
        S.push(num);
    }

    cout << sum;
}