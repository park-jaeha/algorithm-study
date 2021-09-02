//#include<stdio.h>
//#include<algorithm>
//#include<functional>
//#pragma warning(disable:4996)
//using namespace std;
//
////모든 요청배정가능시 요청대로 아닐시 특정 정수 상한액계산
//
//int n;//요청하는 지방의 수
//int num[10000];
//int all;//총 예산
//int sum = 0;
//int Max=0;//최댓값
//int result = 0;
//
//int main() {
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &num[i]);
//		Max = Max > num[i] ? Max : num[i];
//	}
//	sort(num, num + n,less<int>());
//	scanf("%d", &all);//총예산
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