//#include<stdio.h>
//#pragma warning(disable:4996)
//
////n은 100만이하의 자연수
//
////생성자란 m의 분해합이 n인 경우 m을 n의 생성자
////생성자 없을시엔 0반환 false
////만들수 있는 수는 1~9 9가지
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	int m = n;
//	int sum = 0;
//	int ans = 0;
//	int length = 0;//자릿수
//	while (m > 0) {//몇자리수인지 계산
//		m = m / 10;
//		length++;
//	}
//	int temp[7];//100만이기에 7까지
//	int first = n - length * 9;//자릿수*9가지의 경우의 수만 구함
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