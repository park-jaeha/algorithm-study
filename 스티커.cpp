//#include<iostream>
//#include<algorithm>
//#include<functional>
//using namespace std;
//
////첫째줄 첫번째 시작과 둘째줄 첫번째 시작
////첫번째 대각선으로 이동 두번째 대각선으로 이등 총 2가지 경우
//
//int t;//케이스의 개수
//int n;
//int a[2][100002];//2행 n열이므로 2는 고정
//int b[2][100002];
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> t;
//	while(t--) {
//		cin >> n;
//		for (int i = 0; i < 2; i++) {
//			for (int j = 2; j < n+2; j++) {
//				cin >> a[i][j];
//			}
//		}
//		for (int i = 2; i < n + 2; i++) {//스티커 점화식 대각선 1 2 비교
//			b[0][i] = max(b[1][i - 1], b[1][i - 2]) + a[0][i];
//			b[1][i] = max(b[0][i - 1], b[0][i - 2]) + a[1][i];
//		}
//		cout << max(b[0][n+1], b[1][n+1])<<endl;
//	}
//}