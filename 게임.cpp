//#include<stdio.h>
//#include<algorithm>
//#include<functional>
//#pragma warning(disable:4996)
//using namespace std;
//
//#define Max  1000000000
//int main() {
//	long int x, y;//x ����Ƚ��, y �̱���Ӽ�
//	long int count = 0;//ũ�Ⱑ Ŭ���� ����
//	int z;//�·�
//	int result = -1;
//	scanf("%d %d", &x, &y);
//	z = 100 * y / x;
//	if (z >= 99) {
//		printf("%d", result);
//	}
//	else {// �̺�Ž������ Ǯ��� ��
//		long int left = 0, right = Max;
//		while (left <= right) {
//			long int mid = (left + right) / 2;
//			int temp = (100 * (y + mid)) / (x + mid);
//			if (z >= temp) {
//				result = mid + 1;
//				left = mid + 1;
//			}
//			else {
//				right = mid - 1;
//			}
//		}
//		printf("%d", result);
//	}
//}