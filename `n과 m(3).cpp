//#include<iostream>
//using namespace std;
//
//int n, m;
//int arr[7];
//bool visit[7];
//
//void dfs(int depth) {
//	if (depth == m) {
//		for (int i = 0; i < m; i++) {
//			cout << arr[i] << " ";
//		}
//		cout << "\n";
//		return;
//	}
//	for (int i = 0; i < n; i++) {
//		arr[depth] = i+1;
//		dfs(depth + 1);
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> n >> m;
//	dfs(0);
//	return 0;
//}