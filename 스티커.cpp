//#include<iostream>
//#include<algorithm>
//#include<functional>
//using namespace std;
//
////ù°�� ù��° ���۰� ��°�� ù��° ����
////ù��° �밢������ �̵� �ι�° �밢������ �̵� �� 2���� ���
//
//int t;//���̽��� ����
//int n;
//int a[2][100002];//2�� n���̹Ƿ� 2�� ����
//int b[2][100002];
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> t;
//	while(t--) {
//		cin >> n;
//		for (int i = 0; i < 2; i++) {
//			for (int j = 2; j < n+2; j++) {
//				cin >> a[i][j];
//			}
//		}
//		for (int i = 2; i < n + 2; i++) {//��ƼĿ ��ȭ�� �밢�� 1 2 ��
//			b[0][i] = max(b[1][i - 1], b[1][i - 2]) + a[0][i];
//			b[1][i] = max(b[0][i - 1], b[0][i - 2]) + a[1][i];
//		}
//		cout << max(b[0][n+1], b[1][n+1])<<endl;
//	}
//}