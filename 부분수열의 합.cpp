#include<stdio.h>
#pragma warning(disable:4996)

int n, s;//n�� ������ ���� ,s�� ������ ���� ���� �� ����
int num[20];//������ ����
int count = 0;

//����Լ��� �̿��ؾ� ��

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
	dfs(0, 0);//�ε��� 0���� ���� �յ� 0
	printf("%d", count);
}