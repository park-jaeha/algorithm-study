#include<stdio.h>
#pragma warning(disable:4996)

int n, s;//n은 정수의 개수 ,s는 수열의 원소 합이 될 정수
int num[20];//수열의 원소
int count = 0;

//재귀함수를 이용해야 함

void dfs(int index, int sum) {
	if (n == index) {
		return;
	}
	sum += num[index];
	if (sum == s)
		count++;
	dfs(index + 1, sum);
	dfs(index + 1, sum-num[index]);
}

int main() {
	scanf("%d %d", &n, &s);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	dfs(0, 0);//인덱스 0부터 시작 합도 0
	printf("%d", count);
}