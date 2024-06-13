#include <bits/stdc++.h>
using namespace std;

const int MX = 10001;
int dat[2*MX+1];
int head = MX, tail = MX;

void push_front(int x){
    dat[--head] = x;
}

void push_back(int x){
    dat[tail++] = x;
}

void pop_front(){
    if(head == tail) cout << -1 << endl;
    else {
        cout << dat[head++] << endl;
    }
}

void pop_back(){
    if(head == tail) cout << -1 << endl;
    else {
        cout << dat[--tail] << endl;
    }
}

void size(){
    cout << tail - head << endl;
}

void empty(){
    cout << ((head == tail)? 1 : 0) << endl;
}

void front(){
    cout << ((head == tail)? -1 : dat[head]) << endl;
}

void back(){
    cout << ((head == tail)? -1 : dat[tail-1]) << endl;
}

int main(void){
    int cnt;
    string cmd;
    cin >> cnt;

    for(int i = 0; i < cnt; i++){
        cin >> cmd;
        if (cmd.substr(0,4) == "push"){
            int num;
            cin >> num;
            if (cmd[5] == 'f') push_front(num);
            else push_back(num);
        }

        else if (cmd.substr(0,3) == "pop"){
            if (cmd[4] == 'f') pop_front();
            else pop_back();
        }
        else if (cmd == "size") size();
        else if (cmd == "empty") empty();
        else if (cmd == "front") front();
        else back();
    }
}