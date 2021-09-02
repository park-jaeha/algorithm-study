//#include<iostream>
//#include<algorithm>
//#include<functional>
//#include<queue>
//using namespace std;
//
////priority_queue<type,vector<type>,greater<type>>;
////오름차순 내림차순 반대
//int n;
//int num;
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	priority_queue<int, vector<int>, greater<int>>a;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> num;
//		if (num != 0) {
//			a.push(num);
//		}
//		else {
//			if (!a.empty()) {
//				cout << a.top()<<'\n';
//				a.pop();
//			}
//			else
//				cout << 0 << '\n';
//		}
//	}
//}