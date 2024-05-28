#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
char dat[MX];
int pre[MX], nxt[MX];

int unused = 1;
string str;
int cursor;

void insert(int addr, char c){
    dat[unused] = c;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];
    if(nxt[addr] != -1) pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    unused++;
}

void erase(int addr){
    nxt[pre[addr]] = nxt[addr];
    if(nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
}

void traverse(){
    int cur = nxt[0];
    while(cur != -1){
        cout << dat[cur];
        cur = nxt[cur];
    }
}

void setLink(){
    cin >> str;
    cursor = 0;
    for (auto c : str){
        insert(cursor, c);
        cursor++;
    }
}

void typing(){
    int count;
    cin >> count;
    for(int i = 0; i < count; i++){
        char op;
        cin >> op;
        if(op == 'L' && pre[cursor] != -1) cursor = pre[cursor];
        else if (op == 'D' && nxt[cursor] != -1) cursor = nxt[cursor];
        else if (op == 'B' && cursor != 0) {
            erase(cursor);
            cursor = pre[cursor];
        }
        else if(op == 'P'){
            char add;
            cin >> add;
            insert(cursor, add);
            cursor = nxt[cursor];
        }
    }
}

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    fill(pre, pre+MX, -1);
    fill(nxt, nxt+MX, -1);
    setLink();
    typing();
    traverse();
}