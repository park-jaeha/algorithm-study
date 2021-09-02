//#include<stdio.h>
//#include<algorithm>
//#include<functional>
//#pragma warning(disable:4996)
//using namespace std;
//
//#define Max  1000000000
//int main() {
//	long int x, y;//x 게임횟수, y 이긴게임수
//	long int count = 0;//크기가 클수도 있음
//	int z;//승률
//	int result = -1;
//	scanf("%d %d", &x, &y);
//	z = 100 * y / x;
//	if (z >= 99) {
//		printf("%d", result);
//	}
//	else {// 이분탐색으로 풀어야 함
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