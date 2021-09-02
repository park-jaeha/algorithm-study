//#include<stdio.h>
//#include<string.h>
//#pragma warning(disable:4996)
//using namespace std;
//
//int stack[10001];
//
//int main() {
//	int n;// 명령의 갯수
//	int top = 0;
//	int num; //push 인 경우 숫자받을 자리
//	char cmd[10];//명령어 받을 배열 char함수 사용
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {//명령할 횟수 돌림
//		scanf("%s", cmd);
//		if (strcmp(cmd, "push") == 0) {//push 인 경우
//			scanf("%d", &num);//넣을 숫자를 받음
//			stack[top] = num;
//			top++;//top 한칸 올려줌
//		}
//		if (strcmp(cmd, "pop") == 0) {//pop 인 경우
//			if (top <= 0) {
//				printf("-1\n");
//			}
//			else {
//				printf("%d\n", stack[top - 1]);
//				top--;//top 한칸 내려감
//			}
//		}
//		if (strcmp(cmd, "size") == 0) {//size인 경우
//			printf("%d\n", top);
//		}
//		if (strcmp(cmd, "empty") == 0) { //empty인 경우
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
