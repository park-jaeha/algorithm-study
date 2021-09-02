//#include<iostream>
//#include<algorithm>
//#include<functional>
//#include<vector>
//using namespace std;
//
//int n, m;
//int arr[8];
//vector<int>v;
//
//
//void dfs(int depth) {
//	if (depth == m) {
//		for (int i = 0; i < m; i++) {
//			cout << v[arr[i]] << " ";
//		}
//		cout << "\n";
//		return;
//	}
//	int a = 0;
//	for (int i = 0; i < n; i++) {
//		if (a == v[i])
//			continue;
//		a = v[i];
//		arr[depth] = i;
//		dfs(depth + 1);
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
//	dfs(0);
//	return 0;
//}