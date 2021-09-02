//#include<stdio.h>
//#pragma warning(disable:4996)
//
//char color[51][51];
//int n, m;
//int cnt = 0;
//
//void white(int x, int y) {//시작이 w인 보드
//	cnt = 0;
//	for (int i = 0; i < 8; i++) {
//		for (int j = 0; j < 8; j++) {
//			if (i % 2 == 0 && j % 2 == 0 && color[i + x][j + y] != 'W')
//				cnt++;
//			else if (i % 2 == 0 && j % 2 != 0 && color[i + x][j + y] != 'B')
//				cnt++;
//			else if (i % 2 != 0 && j % 2 == 0 && color[i + x][j + y] != 'B')
//				cnt++;
//			else if (i % 2 != 0 && j % 2 != 0 && color[i + x][j + y] != 'W')
//				cnt++;
//		}
//	}
//}
//void black(int x, int y) {//시작이 w인 보드
//	cnt = 0;
//	for (int i = 0; i < 8; i++) {
//		for (int j = 0; j < 8; j++) {
//			if (i % 2 == 0 && j % 2 == 0 && color[i + x][j + y] != 'B')
//				cnt++;
//			else if (i % 2 == 0 && j % 2 != 0 && color[i + x][j + y] != 'W')
//				cnt++;
//			else if (i % 2 != 0 && j % 2 == 0 && color[i + x][j + y] != 'W')
//				cnt++;
//			else if (i % 2 != 0 && j % 2 != 0 && color[i + x][j + y] != 'B')
//				cnt++;
//		}
//	}
//}
//
//int main() {
//	int ans = 100;
//	scanf("%d %d\n", &n, &m);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf("%c", &color[i][j]);
//		}
//		char temp; 
//		scanf("%c", &temp);
//	}
//	for (int i = 0; i <= n-8; i++) {
//		for (int j = 0; j <= m-8; j++) {
//			white(i, j);
//			ans = ans < cnt ? ans : cnt;
//			black(i, j);
//			ans = ans < cnt ? ans : cnt;
//		}
//	}
//	printf("%d", ans);
//}