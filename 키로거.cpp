//#include<iostream>
//#include<stack>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//// ȭ��ǥ �Է��� <, > �� ��Ÿ���� -�� �齺���̽�
//// �������� Ǯ��� ���ҵ�?
//
//
//char ans[1000000];
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	int l;//���� ����
//	stack<char> s1;
//	stack<char> s2;//������  �ʿ���!
//	cin >> l;
//	while (l--) {
//		string str;//�Է¹��� ��Ʈ��
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
//			else {//���ڿ��� �ٷ� push
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
//		}//������ LIFO�̹Ƿ� �Ųٷ� ����ؾ���
//		reverse(ans.begin(), ans.end());
//		cout << ans<<'\n';
//	}
//}