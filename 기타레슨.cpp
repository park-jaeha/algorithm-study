//#include<iostream>
//using namespace std;
//
//int n, m;//n ���� ���� ��, m ��緹�̼�
//int arr[100000];//���� ũ��
//
//bool chk(int mid) {//üŷ �������
//	int cnt = 1, sum = 0;//cnt�� ��緹���� ��
//	for (int i = 0; i < n; i++) {
//		if (arr[i] > mid)
//			return false;
//		sum += arr[i];
//		if (sum > mid) {
//			sum = arr[i];
//			cnt++;
//		}
//	}
//	return m >= cnt;//��緹���� �� ��
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	int sum = 0;//�������� ���� �޾� right��
//	int result;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//		sum += arr[i];
//	}
//	int left = 1, right = sum;
//	while (left <= right) {//�̺�Ž������
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