//#include<iostream>
//#include<algorithm>
//#include<functional>
//#include<vector>
//using namespace std;
//
//int n, m;
//int arr[8];
//bool visit[8];
//vector<int>v;
////중복된 수열 여러번 출력x
//
//
//void dfs(int depth, int cnt) {
//	if (depth == m) {
//		for (int i = 0; i < m; i++) {
//			cout << v[arr[i]] << " ";
//		}
//		cout << "\n";
//		return;
//	}
//	int a = 0;
//	for (int i = cnt; i < n; i++) {
//		if (visit[i]||a==v[i])
//			continue;
//		visit[i] = 1;
//		a = v[i];
//		arr[depth] = i;
//		dfs(depth + 1,i+1);
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
//	dfs(0,0);
//	return 0;
//}