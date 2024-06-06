#include <bits/stdc++.h>
using namespace std;

int main(void){
    int num;
    int top;
    cin >> num;
    vector<int> V;
    vector<int> A;

    for(int i = 0; i < num; i++){
        int stack;
        cin >> stack;
        V.push_back(stack);
    }

    for(int i = num-1; i > -1; i--){
        top = V[i];
        if(i == 0) {A.push_back(0);break;}
        for(int j = i-1; j > -1; j--){
            if(top <= V[j]) {A.push_back(j+1); break;}
            else if(j == 0) A.push_back(0);
        }
    }

    int i = A.size()-1;
    while(i >= 0){
        if (i == 0) cout << A[i];
        else cout << A[i] << ' ';
        i--;
    }
}