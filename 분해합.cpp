//#include<stdio.h>
//#pragma warning(disable:4996)
//
////n�� 100�������� �ڿ���
//
////�����ڶ� m�� �������� n�� ��� m�� n�� ������
////������ �����ÿ� 0��ȯ false
////����� �ִ� ���� 1~9 9����
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	int m = n;
//	int sum = 0;
//	int ans = 0;
//	int length = 0;//�ڸ���
//	while (m > 0) {//���ڸ������� ���
//		m = m / 10;
//		length++;
//	}
//	int temp[7];//100���̱⿡ 7����
//	int first = n - length * 9;//�ڸ���*9������ ����� ���� ����
//	
//	for (int i = first; i < n; i++) {
//		sum = i;
//		temp[0] = i / 1000000;
//		temp[1] = i % 1000000 / 100000;
//		temp[2] = i % 100000 / 10000;
//		temp[3] = i % 10000 / 1000;
//		temp[4] = i % 1000 / 100;
//		temp[5] = i % 100 / 10;
//		temp[6] = i % 10;
//		for (int j = 0; j < 7; j++) {
//			sum += temp[j];
//		}
//		if (sum == n) {
//			ans = i;
//			break;
//		}
//	}
//	printf("%d", ans);
//}