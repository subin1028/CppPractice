#include <bits/stdc++.h>
using namespace std;

int main(void){
    stack<int> FS;
    stack<int> RS;
    stack<int> A;
    A.push(-1);

    int num;
    int small = 0;
    int cnt; 
    cin >> cnt;

    for(int i = 0; i < cnt; i++){
        cin >> num;
        FS.push(num);
    }

    RS.push(FS.top());
    FS.pop();

    for(int i = 0; i < cnt-1; i++){
        num = FS.top();
        FS.pop();
        if(RS.top() > num){
            A.push(RS.top());
            if(num > small){
                if (small == 0) small = num;
                else RS.push(num);
            }
            
        }
        else {
            while(num >= RS.top()){
                RS.pop();
                if(RS.empty()){
                    A.push(-1);
                    break;
                }
            }
            RS.push(num);
        }
    }

    while(!A.empty()){
        cout << A.top() << " ";
        A.pop();
    }
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