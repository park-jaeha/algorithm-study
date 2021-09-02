//#include<iostream>
//#include<algorithm>
//#include<functional>
//using namespace std;
//
////이친수란 이진수 중에서 0으로 시작하지 않고 1이 연속으로 나타나지 않는 경우
////숫자크기 int사이즈 초과
////일의자리 십의자리 백의자리 사이즈를 키워보면 arr(n)=arr(n-1)+arr(n-2)점화식
//int n;
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> n;
//	long int arr[90];
//	arr[0] = 0, arr[1] = 1;
//	for (int i = 2; i <= n; i++) {
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//	cout << arr[n];
//
//}