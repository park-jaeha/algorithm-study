//#include<stdio.h>
//#include<algorithm>
//#include<functional>
//#pragma warning(disable:4996)
//using namespace std;
//
//int n;
//int ans = 1;
//char color[51][51];
////�������� C, �Ķ����� P, �ʷϻ��� Z, ������� Y�� �־���
//
//void check() {//���� ����� ���ӵɰ�� cnt++
//	for (int i = 0; i < n; i++) {
//		int cnt = 1;//������ �ϳ��� �԰� �����ϹǷ� 1�� �ʱ�ȭ
//		for (int j = 0; j < n-1; j++) {
//			if (color[i][j] == color[i][j + 1]) {
//				cnt++;
//			}
//			else {
//				ans = ans > cnt ? ans : cnt;
//				cnt = 1;
//			}
//		}
//		ans = ans>cnt ? ans : cnt;
//	}
//	for (int i = 0; i < n; i++) {
//		int cnt = 1;
//		for (int j = 0; j < n - 1; j++) {
//			if (color[j][i] == color[j + 1][i]) {
//				cnt++;
//			}
//			else {
//				ans = ans > cnt ? ans : cnt;
//				cnt = 1;
//			}
//		}
//		ans = ans > cnt ? ans : cnt;
//	}
//}
//
//int main() {
//	scanf("%d\n", &n);
//	char temp;//�����ϰ� �ӽ������� ��
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			scanf("%c", &color[i][j]);
//		}
//		char tmp;
//		scanf("%c", &tmp);
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n - 1; j++) {
//		///////����
//			temp = color[i][j];
//			color[i][j] = color[i][j + 1];
//			color[i][j + 1] = temp;
//			check();
//			temp = color[i][j + 1];//������� ��������
//			color[i][j + 1] = color[i][j];
//			color[i][j] = temp;
//		//////����
//			temp = color[j][i];
//			color[j][i] = color[j + 1][i];
//			color[j + 1][i] = temp;
//			check();
//			temp = color[j + 1][i];
//			color[j + 1][i] = color[j][i];
//			color[j][i] = temp;
//		}
//	}
//	printf("%d",ans);
//}