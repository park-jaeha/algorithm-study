//#include<stdio.h>
//#pragma warning(disable:4996)
//
////k가 표현될수 있으면 1, 그렇지 않으면 0
////1000까지의 최댓값 44  n(n+1)/2
//
//int num[45];
//
//
//int main() {
//	int k;
//	int ans=0;
//	scanf("%d", &k);
//	for (int i = 1; i < 45; i++) {
//		num[i - 1] = (i*(i + 1)) / 2;
//	}
//	for (int i = 0; i < k; i++) {
//		int n;
//		scanf("%d", &n);
//		for (int a = 0; a < 44; a++) {
//			for (int b = 0; b < 44; b++) {
//				for (int c = 0; c < 44; c++) {
//					if (num[a] + num[b] + num[c] == n) {
//						ans = 1;
//						continue;
//					}
//				}
//			}
//			if(ans!=1)
//				ans = 0;
//		}
//		printf("%d\n",ans);
//		ans = 0;
//	}
//}