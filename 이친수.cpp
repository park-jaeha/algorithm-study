//#include<iostream>
//#include<algorithm>
//#include<functional>
//using namespace std;
//
////��ģ���� ������ �߿��� 0���� �������� �ʰ� 1�� �������� ��Ÿ���� �ʴ� ���
////����ũ�� int������ �ʰ�
////�����ڸ� �����ڸ� �����ڸ� ����� Ű������ arr(n)=arr(n-1)+arr(n-2)��ȭ��
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