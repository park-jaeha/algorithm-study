//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<functional>
//using namespace std;
//
//int n, m;
//int arr[8];
//bool visit[8];
//vector<int> v;
//
//void dfs(int depth,int cnt) {
//	if (depth == m) {
//		for (int i = 0; i < m; i++) {
//			cout << v[arr[i]] << " ";
//		}
//		cout << "\n";
//		return;
//	}
//	for (int i = cnt; i < n; i++) {
//		if (visit[i]) {
//			continue;
//		}
//		visit[i] = 1;
//		arr[depth] = i;
//		dfs(depth+1,i+1);
//		visit[i] = 0;
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		int k;
//		cin >> k;
//		v.push_back(k);
//	}
//	sort(v.begin(), v.end());
//	dfs(0, 0);
//	return 0;
//}