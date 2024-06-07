#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int head = 0, tail = 0;

void push(int x){
    dat[tail++] = x;
}

void pop(){
    head++;
}

int front(){
    return dat[head];
}

int back(){
    return dat[tail-1];
}

void test(){
    push(10); push(20); push(30);
    cout << front() << '\n';
    cout << back() << '\n';
    pop();pop();
    push(15); push(25);
    cout << front() << '\n';
    cout << back() << '\n';
}

int main(void){
    test();
}