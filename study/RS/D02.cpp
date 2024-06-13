#include <bits/stdc++.h>
using namespace std;

int main(void){
    deque<int> DQ;
    DQ.push_front(10);
    DQ.push_back(50);
    DQ.push_front(24); // 24 10 50
    DQ.push_back(60); // 24 10 50 60
    
    for(auto e: DQ) cout << e;
    cout << DQ.size(); //3
    
    if(DQ.empty()) cout << "DQ is empty" << endl;
    else count << "DQ is not empty\n";
    DQ.pop_front(); // 10 50 60
    DQ.pop_back(); // 10 50
    cout << DQ.back() << endl; // 50
    cout << DQ.front() << endl; // 10
    DQ[1] = 17; // 10 17
    DQ.insert(DQ.begin() + 1, 33); // 10 33 50
    DQ.erase(DQ.begine() + 2) // 10 33
    DQ.clear();
}