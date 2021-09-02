//#include<iostream>
//#include<string>
//#include<stack>
//using namespace std;
//
////소수점 둘째자리까지 표기!
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	int n;
//	int num[26];//숫자를 받을 배열
//	string str;//후위표기식을 받음
//	
//	cin >> n;
//	cin >> str;
//	for (int i = 0; i < n; i++) {
//		cin >> num[i];
//	}
//	stack<double> s;
//	for (int i = 0; i < str.length(); i++) {
//		if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
//			//기호가 나올시 두 숫자를 꺼낸다.
//			double first = s.top();
//			s.pop();
//			double second = s.top();
//			s.pop();
//
//			switch (str[i]) {
//			case '+':
//				s.push(second + first);//스택이 LIFO이므로 두번째 먼저 생각
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