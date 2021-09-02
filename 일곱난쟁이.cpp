//#include<stdio.h>
//#include<algorithm>
//#include<functional>
//#pragma warning(disable:4996)
//using namespace std;
//
///////// 7난쟁이들의 키의 합은 100이다
//
//int h[9];//난쟁이들의 키를 받을 배열
//
//int main() {
//	int sum = 0;
//	for (int i = 0; i < 9; i++) {
//		scanf("%d", &h[i]);
//		sum += h[i];
//	}
//	bool ask = false;
//	for (int i = 0; i < 9; i++) {
//		for (int j = i + 1; j < 9; j++) {
//			if (sum - h[i] - h[j] == 100) {
//				h[i] = 1000;//배제시키기위한값
//				h[j] = 1000;
//				ask = true;
//				break;
//			}
//		}
//		if (ask) {
//			break;
//		}
//	}
//	sort(h, h + 9, less<int>());
//	for (int i = 0; i < 7; i++) {
//		printf("%d\n", h[i]);
//	}
//}