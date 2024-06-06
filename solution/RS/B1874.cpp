#include <bits/stdc++.h>
using namespace std;

stack<int> S;
int num;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    string answer;
    int org = 1;
    S.push(100001);
    cin >> num;
    for(int i = 1; i <= num; i++){
        int em;
        cin >> em;
        while(em >= org){
            S.push(org);
            answer += "+\n";
            org++;
        }
        if (S.top() == em) {S.pop(); answer += "-\n";}
        else if(S.top() > em) {cout << "NO"; return 0;}
    }
    cout << answer;
}