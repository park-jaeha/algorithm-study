//#include<iostream>
//using namespace std;
//
//int n, m;
//int arr[9];
//bool visit[8];
//
//void dfs(int depth) {
//	if (depth == m+1) {
//		for (int i = 1; i < m+1; i++) {
//			cout << arr[i] << ' ';
//		}
//		cout << '\n';
//		return;
//	}
//	for (int i = arr[depth-1]+1; i <= n; i++) {
//		if (visit[i])
//			continue;
//		visit[i]=i;
//		arr[depth] = i;
//		dfs(depth + 1);
//		visit[i] = 0;
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> n >> m;
//	dfs(1);
//}