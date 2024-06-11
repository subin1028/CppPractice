#include <bits/stdc++.h>
using namespace std;

int main(void){
    int a[1000001];
    int ans[1000001];
    stack<int> S;

    int num;
    int cnt; 
    cin >> cnt;

    for(int i = 0; i < cnt; i++){
        cin >> num;
        a[i] = num;
    }

    for(int i = cnt-1; i > 0; i--){
            while(!S.empty() && a[i] >= S.top()) S.pop();
            if(S.empty()) ans[i] = -1;
            else ans[i] = S.top();
            S.push(a[i]);
    }

    for(int i = 0; i < cnt; i++) cout << ans[i] << ' ';
}


/*거꾸로 넣기
S.push(-1);
if (S.top() > 새로운 수) && (새로운 수 > small) 
    ans += S.top(); 
    (small == 0)? small = 새로운 수: S.push(새로운 수);

else if S.top() < 새로운 수
   더 작은 수 없을 때까지 pop 만약 S.empty()라면 S.push(-1)
    S.push(새로운 수)
*/