//#include<stdio.h>
//#pragma warning(disable:4996)
//
//char stack[50];//���ý��� �迭
//int top = 0;
//
//int isEmpty() {
//	return top == 0;
//}
//void push(char c) {
//	stack[top++] = c;
//}
//char pop() {
//	return stack[--top];
//}
//
//int main() {
//	int t;
//	char a[51];//��ȣ���� �迭
//	int b=0;
//	scanf("%d", &t);
//	for (int i = 0; i < t; i++) {
//		scanf("%s", a);
//		int result = 1;
//		for (int j = 0; a[j]; j++) {
//			if (a[j] == '(') {	// '('�϶� push
//				push(a[j]);
//			}
//			else {
//				if (isEmpty()) {//������ ������� �ٷ� ��ȯ
//					result = 0;
//					break;
//				}
//				else {//������� ������ pop
//					pop();
//				}
//			}
//		}
//		if (!isEmpty()) {
//			result = 0;
//		}
//		while (!isEmpty()) {
//			pop();
//		}
//		if (result)
//			printf("YES\n");
//		else
//			printf("NO\n");
//	}
//}