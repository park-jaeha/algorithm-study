//#include<stdio.h>
//#include<algorithm>
//#include<functional>
//#pragma warning(disable:4996)
//using namespace std;
//
//long int tree[1000000];
//long int n;// ������ ��
//long int m;//���ϴ� ������ ����
//
////int binary_search(long int *arr,long int n,long int num) {
////	int start = 0;//ó����
////	long int end = n - 1;//����
////	long int mid = (start + end) / 2;//�߰���
////	while (start <= end) {
////		if (arr[mid] == num)
////			return 1; //������
////		else if (arr[mid] < num)
////			start = mid + 1;//������
////		else
////			end = mid - 1;
////		mid = (start + end) / 2;
////	}
////	return 0;
////}
//
//int main() {
//
//	int h;//���ܱ� ������ �ִ�
//	int w = 0;//���� ȹ���� ����
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
//	long int ans = 0;//���� ���� ��
//	long int mid = 0;
//	long int sum = 0;
//	while (left <= right) {
//		mid = (left + right) / 2;
//		sum = 0;//���� ���� �� ����
//		for (int i = 0; i < n; i++){
//			if (mid < tree[i]) {
//				sum+=tree[i]-mid;
//			}
//		}
//		if (sum >= m) {//�ʿ��� ���� �ʰ�
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