#include <bits/stdc++.h>
using namespace std;

int main(void){
    int cnt;
    cin >> cnt;
    int a, b;

    for(int i = 0; i < cnt; i++){
        cin >> a >> b;
        b =  b % 4 + 4;
        long long ans = a;
        for(int i = 1; i < b; i++) ans *= a;
        cout << ((ans % 10 == 0)? 10 : ans % 10) << endl;
    }    
}