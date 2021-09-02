//#include<iostream>
//using namespace std;
//
//int n;
//int arr[2187][2187];
//int ans[3];
//
//void divide(int y, int x, int n) {
//	if (n == 1) {
//		ans[arr[y][x] + 1]++;
//		return;
//	}
//	int sym = arr[y][x];
//	for (int i = y; i < y + n; i++) {
//		for (int j = x; j < x + n; j++) {
//			if (sym == arr[i][j]) {
//				continue;
//			}
//			n /= 3;//다른 숫자가 나올때 자른다
//			divide(y, x, n);
//			divide(y,x + n, n);
//			divide(y, x + n + n, n);
//			divide(y + n, x, n);
//			divide(y + n, x + n, n);
//			divide(y + n, x + n + n, n);
//			divide(y + n + n, x, n);
//			divide(y + n + n, x + n, n);
//			divide(y + n + n, x + n + n, n);
//			return;
//		}
//	}
//	ans[sym + 1]++;//0 1 2로 배열 놔둠
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	divide(0, 0, n);
//	for (int i = 0; i < 3; i++) {
//		cout << ans[i]<<"\n";
//	}
//	return 0;
//}