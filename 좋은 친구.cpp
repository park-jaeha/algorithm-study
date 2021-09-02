//#include<iostream>
//#include<string>
//#include<queue>
//using namespace std;
//
//int n, k;
//queue<int> q[21];
////배열로 접근하게 되면 o(n^2)이 되기 때문에 시간초과 뜸(인덱스 30만^2;;).
////큐를 사용하여 접근해 주었다. 이름 크기별로 큐를 만들어 해결함
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