//#include<stdio.h>
//#pragma warning(disable:4996)
//
//
//int main() {
//	int x; //�޴� ����
//	scanf("%d", &x);
//	int dp[1000001];//���� ���α׷�������
//	dp[0] = 0;
//	for (int i = 2; i <= x; i++) {
//		dp[i] = dp[i - 1] + 1;
//		if (i % 2 == 0 && dp[i / 2] + 1 < dp[i])
//			dp[i] = dp[i / 2] + 1;
//		if (i % 3 == 0 && dp[i / 3] + 1 < dp[i])
//			dp[i] = dp[i / 3] + 1;
//	}
//	printf("%d", dp[x]);
//}