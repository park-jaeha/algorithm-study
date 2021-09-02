//#include<iostream>
//using namespace std;
//
//int n, m;
//int arr[9];
//
//void dfs(int depth) {
//	if (depth == m+1) {
//		for (int i = 1; i <= m; i++) {
//			cout << arr[i]+1 << " ";
//		}
//		cout << "\n";
//		return;
//	}
//	for (int i = arr[depth-1]; i < n; i++) {
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
//	dfs(1);
//	return 0;
//}