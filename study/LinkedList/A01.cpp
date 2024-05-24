#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX], pre[MX], nxt[MX];
//dat[i]:i번쨰 원소값
//pre[i]: i번째 원소에 대한 이전 원소 인덱스
//nxt[i]: 다음 원소 인덱스
//만약 pre or nxt가 -1이라면, 이전 또는 다음 원소 존재x

//0번지는 시작을 위한 더미 노드

int unused = 1; //현재 사용하지 않는 인덱스, 원소 들어갈 수 있음

void insert(int addr, int num){
    dat[unused] = num;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];
    if(nxt[addr] != -1) pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    unused++;
}
//13이 2번지이고, 13 뒤에 20을 추가하고 싶다면 insert(2,20)

void erase(int addr){
    nxt[pre[addr]] = nxt[addr];
    if(nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
    //지우려는 주소의 다음이 존재할 때만 pre 연결
}
//13을 지우고 싶으면 erase(2)


void traverse(){ //요소 전체 출력
    int cur = nxt[0]; //0번지의 다음 원소 인덱스
    while(cur != -1){
        cout << dat[cur] << ' ';
        cur = nxt[cur];
    }
    cout << "\n\n";
}

void insert_test(){
  cout << "****** insert_test *****\n";
  insert(0, 10); // 10(address=1)
  traverse();
  insert(0, 30); // 30(address=2) 10
  traverse();
  insert(2, 40); // 30 40(address=3) 10
  traverse();
  insert(1, 20); // 30 40 10 20(address=4)
  traverse();
  insert(4, 70); // 30 40 10 20 70(address=5)
  traverse();
}

void erase_test(){
  cout << "****** erase_test *****\n";
  erase(1); // 30 40 20 70
  traverse();
  erase(2); // 40 20 70
  traverse();
  erase(4); // 40 70
  traverse();
  erase(5); // 40
  traverse();
}

int main(void) {
  fill(pre, pre+MX, -1);
  fill(nxt, nxt+MX, -1);
  insert_test();
  erase_test();
}