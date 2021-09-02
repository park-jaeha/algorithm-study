#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>
#include<set>
using namespace std;

int n, m;
int arr[8];
bool visit[8];
vector<int> v;

void dfs(int depth,int cnt) {
	if (depth == m) {
		for (int i = 0; i < m; i++) {
			cout << v[arr[i]] << " ";
		}
		cout << "\n";
		return;
	}
	int used[10000] = { 0 };//중복되는 숫자들 체크
	for (int i = cnt; i < n; i++) {
		if (used[v[i]] == 0) {//v[i]가 같은 숫자면 1이 들어가있음
			used[v[i]] = 1;
			arr[depth] = i;
			dfs(depth + 1, i);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		v.push_back(k);
	}
	sort(v.begin(), v.end());
	dfs(0,0);
	return 0;
}