//#include<stdio.h>
//#include<string.h>
//#pragma warning(disable:4996)
//using namespace std;
//
//int stack[10001];
//
//int main() {
//	int n;// ����� ����
//	int top = 0;
//	int num; //push �� ��� ���ڹ��� �ڸ�
//	char cmd[10];//��ɾ� ���� �迭 char�Լ� ���
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {//����� Ƚ�� ����
//		scanf("%s", cmd);
//		if (strcmp(cmd, "push") == 0) {//push �� ���
//			scanf("%d", &num);//���� ���ڸ� ����
//			stack[top] = num;
//			top++;//top ��ĭ �÷���
//		}
//		if (strcmp(cmd, "pop") == 0) {//pop �� ���
//			if (top <= 0) {
//				printf("-1\n");
//			}
//			else {
//				printf("%d\n", stack[top - 1]);
//				top--;//top ��ĭ ������
//			}
//		}
//		if (strcmp(cmd, "size") == 0) {//size�� ���
//			printf("%d\n", top);
//		}
//		if (strcmp(cmd, "empty") == 0) { //empty�� ���
//			if (top <= 0) {
//				printf("1\n");
//			}
//			else
//				printf("0\n");
//		}
//		if (strcmp(cmd, "top") == 0) {
//			if (top <= 0) {
//				printf("-1\n");
//			}
//			else
//				printf("%d\n", stack[top - 1]);
//		}
//	}
//}
