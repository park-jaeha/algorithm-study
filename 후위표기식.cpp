//#include<iostream>
//#include<string>
//#include<stack>
//using namespace std;
//
////a+b의 경우 전위 표기법 +ab 후위 표기법 ab+
////a+b*c->abc*+
////스택으로 '('가 들어올때 push
////swith함수 사용하여 풀어야함
//
//
//int main(void) {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	string str;//받을 스트링
//	string result;//결과 나타낼 스트링
//	cin >> str;
//	stack<char> s;
//	for (int i = 0; i < str.length(); i++) {
//		if ('A' <= str[i] && str[i] <= 'Z') {
//			result += str[i];
//		}//피연산자가 앞으로 가게 우선 받음
//		else {
//			switch (str[i]) {
//			case '(':
//				s.push(str[i]);
//				break;
//			case '*':
//			case '/'://우선순위 높은 연산자
//				while (!s.empty() && (s.top() == '*' || s.top() == '/')) {
//					result += s.top();
//					s.pop();
//				}
//				s.push(str[i]);
//				break;
//			case '+':
//			case '-':
//				while (!s.empty() && s.top() != '(') {
//					result += s.top();
//					s.pop();
//				}
//				s.push(str[i]);
//				break;
//			case ')':
//				while (!s.empty() && s.top() != '(') {// '('가 나올때까지
//					result += s.top();
//					s.pop();
//				}
//				s.pop();
//				break;
//			}
//		}
//	}
//	while (!s.empty()) {
//		result += s.top();
//		s.pop();
//	}
//	cout << result;
//}