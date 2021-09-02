//#include<iostream>
//#include<string>
//using namespace std;
//
//int n;
//int arr[65][65];
//
////void dfs(int x, int y,int **a) {
////	sym = arr[p.first][p.second];
////	for (int i = 0; i < n; i++) {
////		for (int j = 0; j < n; j++) {
////			if (sym != arr[i][j]) {////	같지 않을때 분할
////				cout << '(';
////				if (i < x_mid && j < y_mid) {//1
////					p.first = 0, p.second = 0; 
////					x_mid /= 2;
////					y_mid /= 2;
////					cnt++;
////					dfs(p.first, p.second, a);
////				}
////				else if (i > x_mid && j < y_mid) {//2
////					p.first = x_mid, p.second = 0;
////					x_mid = (n + x_mid) / 2;
////					y_mid /= 2;
////					cnt++;
////					dfs(p.first, p.second, a);
////				}
////				else if (i<x_mid && j > y_mid) {//3
////					p.first = 0, p.second = y_mid;
////					x_mid /= 2;
////					y_mid = (n + y_mid / 2);
////					cnt++;
////					dfs(p.first, p.second, a);
////				}
////				else {//4
////					p.first = x_mid, p.second = y_mid;
////					x_mid = (n + x_mid) / 2;
////					y_mid = (n + y_mid / 2);
////					cnt++;
////					dfs(p.first, p.second, a);
////				}
////			}
////		
////		}
////	}
////}
//void dfs(int x, int y, int N) {
//	if (N == 1) {
//		cout << arr[y][x];
//		return;
//	}
//	bool zero = true;
//	bool one = true;
//	for (int i = y; i < y + N; i++) {
//		for (int j = x; j < x + N; j++) {
//			if (arr[i][j])
//				zero = false;
//			else
//				one = false;
//		}
//	}
//	if (zero)
//		cout << 0;
//	else if (one)
//		cout << 1;
//	else {
//		cout << "(";
//		dfs(x, y, N/2);//2사분면
//		dfs(x + N / 2, y, N/2);//1사분면
//		dfs(x, y + N / 2, N/2);//3사분면
//		dfs(x + N / 2, y + N / 2, N/2);//4사분면
//		cout << ")";
//	}
//	return;
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> n;
//	bool zero = true, one = true;
//	for (int i = 0; i < n; i++) {
//		string s;
//		cin >> s;
//		for (int j = 0; j < n; j++) {
//			arr[i][j] = s[j] - '0';
//		}
//	}
//	dfs(0, 0, n);
//}