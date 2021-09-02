//#include<stdio.h>
//#include<algorithm>
//#include<functional>
//#pragma warning(disable:4996)
//using namespace std;
//
//long int tree[1000000];
//long int n;// 나무의 수
//long int m;//원하는 나무의 길이
//
////int binary_search(long int *arr,long int n,long int num) {
////	int start = 0;//처음값
////	long int end = n - 1;//끝값
////	long int mid = (start + end) / 2;//중간값
////	while (start <= end) {
////		if (arr[mid] == num)
////			return 1; //같을때
////		else if (arr[mid] < num)
////			start = mid + 1;//작을때
////		else
////			end = mid - 1;
////		mid = (start + end) / 2;
////	}
////	return 0;
////}
//
//int main() {
//
//	int h;//절단기 높이의 최댓값
//	int w = 0;//나무 획득한 길이
//	int max = 0;
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &tree[i]);
//		if (max < tree[i]) {
//			max = tree[i];
//		}
//	}
//	long int left = 0;
//	long int right = max;
//	long int ans = 0;//정답 넣을 것
//	long int mid = 0;
//	long int sum = 0;
//	while (left <= right) {
//		mid = (left + right) / 2;
//		sum = 0;//남은 길이 합 저장
//		for (int i = 0; i < n; i++){
//			if (mid < tree[i]) {
//				sum+=tree[i]-mid;
//			}
//		}
//		if (sum >= m) {//필요한 나무 초과
//			if (ans < mid) {
//				ans = mid;
//			}
//			left = mid + 1;
//		}
//		else
//			right = mid - 1;
//	}
//	printf("%d", ans);
//}