//#include<stdio.h>
//#pragma warning(disable:4996)
//
//int dp[1001][1001] = { 0 };
//
//int main() {
//	int n, k;
//	scanf("%d", &n);
//	scanf("%d", &k);
//	for (int i = 0; i <= n; i++) {
//		for (int j = 0; j <= i; j++) {
//			if (i == j || j == 0)	dp[i][j] = 1;
//			else
//				dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % 10007;
//		}
//	}
//	int ans = 0;
//	ans = dp[n][k];
//	printf("%d", ans);
//}