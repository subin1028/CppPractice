#include <iostream>
#include <vector>
using namespace std;

// 1 22 333 444 555
// 1 2 3 / 123 / 321 / 444
// 2 9 10 21 24 / 92422110 / 10212249 / 102634359

vector<char> vkey;
int main(void){
    string skey;
	int nkey[31];
	int count;
	char message[31];

	cin >> skey;
	for(int i = 0; i < skey.size(); i++){
		int num = (int) skey[i] - 97;
		vkey.push_back(num);
	}
	
	for(auto e: vkey){
		cout << e << ' ';
	}
     
     vkey.
} 