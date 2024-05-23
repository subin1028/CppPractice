#include <bits/stdc++.h>
using namespace std;

int main(void){
    vector<int> v1(3,5); //{5,5,5}
    cout << v1.size() << '\n';
    v1.push_back(7);
    for (int e : v1) //range-based for loop
        cout << e << ' ';
        //만약 원본값에 영향을 주고 싶다면 int& e : v1

    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << ' ';
    }

    vector<int> v2(2); //{0,0};
    v2.insert(v2.begin()+1, 3); //{0,3,0}

    vector<int> v3 = {1,2,3,4};
    v3.erase(v3.begin()+2);
    
    vector<int> v4; //{}
    v4 = v3; //same with deep copy
    v4.pop_back(); //맨 뒤 요소 제거
    v4.clear(); //전체 요소 삭제
} //push_front, pop_front => O(N)