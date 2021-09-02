//#include<iostream>
//#include<stack>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//// 화살표 입력은 <, > 로 나타내고 -는 백스페이스
//// 스택으로 풀어야 편할듯?
//
//
//char ans[1000000];
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	int l;//영어 엘임
//	stack<char> s1;
//	stack<char> s2;//보조용  필요함!
//	cin >> l;
//	while (l--) {
//		string str;//입력받을 스트링
//		cin >> str;
//		for (int i = 0; i < str.length(); i++) {
//			if (str[i] == '<') {
//				if (!s1.empty()) {
//					s2.push(s1.top());
//					s1.pop();
//				}
//			}
//			else if (str[i] == '>') {
//				if (!s2.empty()) {
//					s1.push(s2.top());
//					s2.pop();
//				}
//			}
//			else if (str[i] == '-') {
//				if (!s1.empty()) {
//					s1.pop();
//				}
//			}
//			else {//문자열은 바로 push
//				s1.push(str[i]);
//			}
//		}
//		while (!s2.empty()) {
//			s1.push(s2.top());
//			s2.pop();
//		}
//		string ans;
//		while(!s1.empty()){
//			ans += s1.top();
//			s1.pop();
//		}//스택은 LIFO이므로 거꾸로 출력해야함
//		reverse(ans.begin(), ans.end());
//		cout << ans<<'\n';
//	}
//}