//#include<iostream>
//#include<algorithm>
//#include<functional>
//using namespace std;
//
//int n, m;//1000¹Ì¸¸
////ÀÜµ· 500 100 50 10 5 1
//int cnt=0;
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> m;
//	n = 1000 - m;
//	while (n != 0) {
//		if (n - 500 >= 0) {
//			cnt++;
//			n -= 500;
//		}
//		else if (n - 100 >= 0) {
//			cnt++;
//			n -= 100;
//		}
//		else if (n - 50 >= 0) {
//			cnt++;
//			n -= 50;
//		}
//		else if (n - 10 >= 0) {
//			cnt++;
//			n -= 10;
//		}
//		else if (n - 5 >= 0) {
//			cnt++;
//			n -= 5;
//		}
//		else {
//			cnt++;
//			n--;
//		}
//	}
//
//	cout << cnt<<"\n";
//	return 0;
//}