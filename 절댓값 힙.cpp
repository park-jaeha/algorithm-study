//#include<iostream>
//#include<algorithm>
//#include<functional>
//#include<queue>
//using namespace std;
//
//int n;
//priority_queue < int, vector<int>, greater<int>> a;
//priority_queue<int, vector<int>, less<int>>b;
//
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> n;
//	int k;
//	for (int i = 0; i < n; i++) {
//		cin >> k;
//		if (k != 0) {
//			if (k > 0) {
//				a.push(k);
//			}
//			else
//				b.push(k);
//		}
//		else {
//			if (a.empty() && b.empty()) {
//				cout << 0 << "\n";
//			}
//			else if (!a.empty() && !b.empty()) {
//				if (a.top() >= -b.top()) {
//					cout << b.top() << "\n";
//					b.pop();
//				}
//				else if (a.top() < -b.top()){
//					cout << a.top() << "\n";
//					a.pop();
//				}
//			}
//			else if (a.empty() && !b.empty()) {
//				cout << b.top()<<"\n";
//				b.pop();
//			}
//			else if (!a.empty() && b.empty()) {
//				cout << a.top() << "\n";
//				a.pop();
//			}
//		}
//	}
//	return 0;
//}
