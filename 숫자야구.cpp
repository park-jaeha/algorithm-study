//#include <stdio.h>
//#pragma warning(disable:4996)
//
//int n, ans, a[3], b[3];
//struct ABC {//받을 숫자
//	int num, st, ba;
//} A[1000];
//
//int main() {
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d %d %d", &A[i].num, &A[i].st, &A[i].ba);
//	}
//
//	for (int i = 123; i <= 987; i++) {
//		int cnt = 0;
//		a[0] = i / 100, a[1] = (i % 100) / 10, a[2] = i % 10;
//		if (!a[1] || !a[2] || a[0] == a[1] || a[1] == a[2] || a[2] == a[0]) continue;
//		for (int j = 0; j < n; j++) {
//			int st = 0, ba = 0, t = A[j].num;
//			b[0] = t / 100, b[1] = (t % 100) / 10, b[2] = t % 10;
//			for (int k = 0; k < 3; k++) {
//				if (a[k] == b[k]) st++;
//				if (a[k] == b[(k + 1) % 3] || a[k] == b[(k + 2) % 3]) ba++;
//			}
//			if (st == A[j].st && ba == A[j].ba) cnt++;
//		}
//		if (cnt == n) ans++;
//	}
//
//	printf("%d", ans);
//
//	return 0;
//}