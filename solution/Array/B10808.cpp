#include <bits/stdc++.h>
using namespace std;

int arr[26];

int main(void){
    cin.tie(0);
    string word;
    cin >> word;
    for (auto e: word){
        arr[e-'a']++;
    }

    for (auto a: arr){
        cout << a << ' ';
    }
}

