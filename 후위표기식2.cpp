//#include<iostream>
//#include<string>
//#include<stack>
//using namespace std;
//
////�Ҽ��� ��°�ڸ����� ǥ��!
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	int n;
//	int num[26];//���ڸ� ���� �迭
//	string str;//����ǥ����� ����
//	
//	cin >> n;
//	cin >> str;
//	for (int i = 0; i < n; i++) {
//		cin >> num[i];
//	}
//	stack<double> s;
//	for (int i = 0; i < str.length(); i++) {
//		if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
//			//��ȣ�� ���ý� �� ���ڸ� ������.
//			double first = s.top();
//			s.pop();
//			double second = s.top();
//			s.pop();
//
//			switch (str[i]) {
//			case '+':
//				s.push(second + first);//������ LIFO�̹Ƿ� �ι�° ���� ����
//				break;
//			case '-':
//				s.push(second - first);
//				break;
//			case '*':
//				s.push(second*first);
//				break;
//			case '/':
//				s.push(second / first);
//				break;
//			}
//		}
//		else
//			s.push(num[str[i] - 'A']);//A****
//	}
//	double result = s.top();
//	cout << fixed;
//	cout.precision(2);
//	cout << result;
//}