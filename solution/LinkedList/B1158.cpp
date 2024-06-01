#include <bits/stdc++.h>
using namespace std;

const int MAX = 5001;
int pre[MAX], nxt[MAX];
int N;
int K;
int len = 0;

int main(void){
    
    cin >> N >> K;

    vector<int> A; //answer

    for(int i = 1; i < N+1; i++){
        pre[i] = (i==1) ? N : i-1;
        nxt[i] = (i==N) ? 1 : i+1; 
        ++len; // 원형 연결리스트 만들기
    }

    int count = 1;
    for(int cur = 1; len > 0; cur = nxt[cur]){
        if(count == K){
            pre[nxt[cur]] = pre[cur];
            nxt[pre[cur]] = nxt[cur];
            --len;
            A.push_back(cur);
            count = 1;
        } //만약 K번째 원소라면 연결리스트에서 삭제하고 A리스트에 넣기
        else{count++;}
    }

    cout << "<";
    for(int i = 0; i < A.size(); i++){
        if(i != A.size()-1){
            cout << A[i] << ", ";
        }
        else cout << A[i];
    }

    cout << ">";
}