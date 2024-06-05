#include <bits/stdc++.h>
using namespace std;

int main(void){
    cin.tie(0);
    int tot_cash, count, cash, c_count;
    int sum = 0;
    cin >> tot_cash >> count;
    for(int i = 0; i < count; i++){
        cin >> cash >> c_count;
        sum += cash * c_count;
    }

    (sum == tot_cash)? cout << "YES" : cout << "NO";
}