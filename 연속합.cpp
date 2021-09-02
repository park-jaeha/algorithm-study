#include<stdio.h>
#pragma warning(disable:4996)


int main() {
	int n;
	int arr[1000000];
	int cal[1000000];
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		getchar();
	}
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			continue;
			count++;
		}
		cal[count] += arr[i];
	}
	int big = cal[0];
	for(int i=0;i<count;i++) {
		if (cal[i] < cal[i + 1]) {
			big = cal[i + 1];
		}
	}
	printf("%d", big);
	getchar();
}