//#include<iostream>
//#include<algorithm>
//#include<functional>
//#define MAX 100001
//using namespace std;
//
//int n, k;
//int val[100001];
//int dp[10001];
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie();
//
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++) {
//		cin >> val[i];
//	}
//	dp[0] = 1;
//	for (int i = 1; i <= n; i++) {
//		for (int j = val[i]; j <= k; j++) {
//			dp[j] += dp[j - val[i]];
//		}
//	}
//	cout << dp[k];
//}