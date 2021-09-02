//#include<stdio.h>
//#pragma warning(disable:4996)
//
//int arr[1000001];
//
//int main() {
//	int n;
//	int top = 0;
//	scanf("%d", &n);
//	int bottom = n - 1;
//	for (int i = 0; i < n; i++) {
//		arr[i]=i+1;
//	}
//	while (top != bottom) {
//		top++;
//		arr[n] = arr[top];
//		top++;
//		bottom++;
//		n++;
//	}
//	printf("%d", arr[top]);
//}