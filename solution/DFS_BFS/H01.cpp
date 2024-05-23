
#include <bits/stdc++.h>
using namespace std;

int n;
int maxi = 0;
int graph[11][11];
vector<string> v;

bool dfs(int x, int y){
	if (x <= -1 || x >= n || y <= -1 || y >= n) {
		return false;
	}
	if (graph[x][y] == 1){
		maxi += 1;
		graph[x][y] = 0;
		dfs(x-1, y);
		dfs(x, y-1);
		dfs(x+1, y);
		dfs(x, y+1);

		return true;
	}
	
	return false;
}

int main() {
	cin >> n;
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			scanf("%1d", &graph[i][j]);
		}
	}
	
	int result = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(dfs(i,j)){
				result += 1;
				v.push_back(to_string(maxi));
				maxi = 0;
			}
		}
	}
	cout << result << '\n';
	sort(v.begin(), v.end());
	for (auto s : v){
		cout << s << " ";
	}
	return 0;
}