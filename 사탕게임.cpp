//#include<stdio.h>
//#include<algorithm>
//#include<functional>
//#pragma warning(disable:4996)
//using namespace std;
//
//int n;
//int ans = 1;
//char color[51][51];
////빨간색은 C, 파란색은 P, 초록색은 Z, 노란색은 Y로 주어짐
//
//void check() {//같은 색깔로 연속될경우 cnt++
//	for (int i = 0; i < n; i++) {
//		int cnt = 1;//기준점 하나를 먹고 시작하므로 1로 초기화
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
//	char temp;//스왑하고 임시저장할 곳
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			scanf("%c", &color[i][j]);
//		}
//		char tmp;
//		scanf("%c", &tmp);
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n - 1; j++) {
//		///////가로
//			temp = color[i][j];
//			color[i][j] = color[i][j + 1];
//			color[i][j + 1] = temp;
//			check();
//			temp = color[i][j + 1];//원래대로 돌려놓기
//			color[i][j + 1] = color[i][j];
//			color[i][j] = temp;
//		//////세로
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