//#include<iostream>
//using namespace std;
//
//// DFS 활용
//// 탐색한 길 제외
//
//
//int n, m;
//int arr[501][501];
//int dx[4] = { -1,0,1,0 };
//int dy[4] = { 0,-1,0,1 };
//int dp[501][501];
//int ans = 0; //10억이라 int 형 범위 벗어나지 않음
//
//int dfs(int y, int x) {
//
//	if (y == m && x == n) {
//		return 1;
//	}
//	else if (dp[y][x] == -1) {
//		dp[y][x] = 0; //한번 들른길 표시
//		for (int i = 0; i < 4; i++) {
//			int nX = x + dx[i];
//			int nY = y + dy[i];
//			if (nX > 0 && nX <= n && nY>0 && nY<=m &&arr[y][x]>arr[nY][nX]) {
//				dp[y][x] += dfs(nY, nX);
//			}
//		}
//	}
//	return dp[y][x];
//}
//
//int main() {
//	
//	ios_base::sync_with_stdio();
//	cin.tie();
//	cin >> m >> n;
//	for (int i = 0; i <= m; i++) {
//		for (int j = 0; j <= n; j++) {
//			dp[i][j] = -1; //-1로 초기 설정 후 지나간 길 0으로 초기화 할 예정
//			arr[i][j] = 10001;//최댓값보다 크게 설정
//		}
//	}
//	for (int i = 1; i <= m; i++) {
//		for (int j = 1; j <= n; j++) {
//			cin >> arr[i][j]; // 맵 받아주기
//		}
//	}
//	ans= dfs(1, 1);
//	cout << ans;
//	return 0;
//}