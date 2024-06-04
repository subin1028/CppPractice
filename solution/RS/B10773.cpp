#include <bits/stdc++.h>
using namespace std;

int main(void){
    stack<int> S;
    int count;
    int sum = 0;
    int pre_num = 0;
    cin >> count;
    for(int i = 0; i < count; i++){
        int num;
        cin >> num;
        if (num == 0){
            if(!S.empty()) S.pop();
        }
        else S.push(num);
    }
    
    while(!S.empty()){
        sum += S.top();
        S.pop();
    }
    cout << sum;
}