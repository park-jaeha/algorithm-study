//#include<stdio.h>
//#pragma warning(disable:4996)
//
//char stack[50];//스택쌓을 배열
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
//	char a[51];//괄호받을 배열
//	int b=0;
//	scanf("%d", &t);
//	for (int i = 0; i < t; i++) {
//		scanf("%s", a);
//		int result = 1;
//		for (int j = 0; a[j]; j++) {
//			if (a[j] == '(') {	// '('일때 push
//				push(a[j]);
//			}
//			else {
//				if (isEmpty()) {//스택이 비었을때 바로 반환
//					result = 0;
//					break;
//				}
//				else {//비어있지 않을때 pop
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