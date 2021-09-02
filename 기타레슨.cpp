//#include<iostream>
//using namespace std;
//
//int n, m;//n 들어가는 레슨 수, m 블루레이수
//int arr[100000];//레슨 크기
//
//bool chk(int mid) {//체킹 해줘야함
//	int cnt = 1, sum = 0;//cnt는 블루레이의 수
//	for (int i = 0; i < n; i++) {
//		if (arr[i] > mid)
//			return false;
//		sum += arr[i];
//		if (sum > mid) {
//			sum = arr[i];
//			cnt++;
//		}
//	}
//	return m >= cnt;//블루레이의 수 비교
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	int sum = 0;//곡들길이의 합을 받아 right로
//	int result;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//		sum += arr[i];
//	}
//	int left = 1, right = sum;
//	while (left <= right) {//이분탐색으로
//		int mid = (left + right) / 2;
//			if (chk(mid)) {
//				result = mid;
//				right = mid - 1;
//			}
//			else
//				left = mid + 1;
//	}
//	cout << result;
//}