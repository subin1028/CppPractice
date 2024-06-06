#include <bits/stdc++.h>
using namespace std;

stack<int> S;
vector<string> A;
int num;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int org = 1;
    S.push(100001);
    cin >> num;
    for(int i = 1; i <= num; i++){
        int em;
        cin >> em;
        // if(em < org){cout << "NO"; break;}
        while(em >= org){
            S.push(org);
            // cout << "+" << endl;
            // cout << S.top() << endl;
            A.push_back("+");
            org++;
        }
        if (S.top() == em) {S.pop(); A.push_back("-");}
        else if(S.top() > em) {cout << "NO"; A.clear(); break;}
    }

    for(int i = 0; i < A.size(); i++){
        cout << A[i] << endl;
    }
}