//#include<iostream>
//#include<string>
//#include<queue>
//using namespace std;
//
//int n, k;
//queue<int> q[21];
////�迭�� �����ϰ� �Ǹ� o(n^2)�� �Ǳ� ������ �ð��ʰ� ��(�ε��� 30��^2;;).
////ť�� ����Ͽ� ������ �־���. �̸� ũ�⺰�� ť�� ����� �ذ���
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie();
//
//	long int cnt = 0;
//	
//	cin >> n >> k;
//	
//	for (int i = 0; i < n; i++) {
//		string temp;
//		cin >> temp;
//		int length = temp.length();
//		while (!q[length].empty() && i - q[length].front() > k) {
//			q[length].pop();
//		}
//		cnt += q[length].size();
//		q[length].push(i);
//	}
//	////////////////////////////////////
//	/*for (int i = 0; i < n; i++) {
//		for (int j = i+1; j - i <= k; j++) {
//			if (arr[i] == arr[j]) {
//				cnt++;
//			}
//		}
//	}*/
//	cout << cnt;
//	return 0;
//}