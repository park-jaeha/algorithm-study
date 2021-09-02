//#include<iostream>
//using namespace std;
//
//int n, m;
//int i = 1;
//int arr[8];
//bool visit[8];
//
//void dfs(int depth) {
//	if (depth == m) {//≈ª¡÷ ¡∂∞«
//		for (int i = 0; i < m; i++) {
//			cout << arr[i]<<" ";
//		}
//		cout << '\n';
//		return;
//	}
//	for (int i = 1; i <= n; i++) {
//		if (visit[i]) {
//			continue;
//		}
//		visit[i] = 1;
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
//	dfs(0);
//}
//
