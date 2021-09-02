//#include<iostream>
//using namespace std;
//
//int n, k;
//
//int factorial(int n) {
//	int result = 1;
//	for (int i = 1; i <= n; i++) {
//		result = result*i;
//	}
//	return result;
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie();
//
//	cin >> n >> k;
//	
//	int ans;
//	////n!/(n-k)!k!
//	ans = factorial(n) / (factorial(n - k)*factorial(k));
//	cout << ans;
//	return 0;
//}