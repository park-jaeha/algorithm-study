//#include<stdio.h>
//#include<algorithm>
//#include<functional>
//#pragma warning(disable:4996)
//using namespace std;
//
////��� ��û�������ɽ� ��û��� �ƴҽ� Ư�� ���� ���Ѿװ��
//
//int n;//��û�ϴ� ������ ��
//int num[10000];
//int all;//�� ����
//int sum = 0;
//int Max=0;//�ִ�
//int result = 0;
//
//int main() {
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &num[i]);
//		Max = Max > num[i] ? Max : num[i];
//	}
//	sort(num, num + n,less<int>());
//	scanf("%d", &all);//�ѿ���
//	int left = 0, right = Max, mid;
//	while (left <= right) {
//		mid = (left + right) / 2;
//		sum = 0;
//		for (int i = 0; i < n; i++) {
//			sum += min(num[i], mid);
//		}
//		if (sum <= all) {
//			result = mid;
//			left = mid + 1;
//		}
//		else
//			right = mid - 1;
//	}
//	printf("%d", result);
//}