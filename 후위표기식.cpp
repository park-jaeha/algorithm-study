//#include<iostream>
//#include<string>
//#include<stack>
//using namespace std;
//
////a+b�� ��� ���� ǥ��� +ab ���� ǥ��� ab+
////a+b*c->abc*+
////�������� '('�� ���ö� push
////swith�Լ� ����Ͽ� Ǯ�����
//
//
//int main(void) {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	string str;//���� ��Ʈ��
//	string result;//��� ��Ÿ�� ��Ʈ��
//	cin >> str;
//	stack<char> s;
//	for (int i = 0; i < str.length(); i++) {
//		if ('A' <= str[i] && str[i] <= 'Z') {
//			result += str[i];
//		}//�ǿ����ڰ� ������ ���� �켱 ����
//		else {
//			switch (str[i]) {
//			case '(':
//				s.push(str[i]);
//				break;
//			case '*':
//			case '/'://�켱���� ���� ������
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
//				while (!s.empty() && s.top() != '(') {// '('�� ���ö�����
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