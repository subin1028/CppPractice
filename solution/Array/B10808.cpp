#include <bits/stdc++.h>
using namespace std;

string word;
int arr[26];

int main(void){
    cin.tie(0);
    cin >> word;
    for (int i = 0; i < word.size(); i++){
        arr[(int)word[i]-97] += 1;
    }

    for (auto e: arr){
        cout << e << ' ';
    }
}

