////#include<iostream>
////#include<stack>
////using namespace std;
////
//////���� ���� ���� ������ ġ�� count++���ش�. �ٽ� ���� ���� ��������
//////count �� ��ŭ ans ++
//////�տ��� ���� ģ ���� ������ ������ no count �Ѵ�.
////
////
////int main() {
////	ios_base::sync_with_stdio(0);
////	cin.tie(0);
////
////	int n, p;//n�� ���� ��, p�� ������ ��
////	int count = 0;
////	int temp = 0;
////	scanf("%d %d", &n, &p);
////	stack<int> s[7];//��Ÿ�� 1~6����
////	for (int i = 0; i < n; i++) {
////		pair<int, int> temp;
////		cin >> temp.first >> temp.second;
////		if (s[temp.first].empty()) {//���� ����ִٸ�
////			count++;
////			s[temp.first].push(temp.second);//�� ���� ���� ����
////		}
////		else {
////			if (temp.second > s[temp.first].top()) {
////				s[temp.first].push(temp.second);
////				count++;
////			}
////			else if (temp.second == s[temp.first].top()) {
////				continue;
////			}
////			else {//���� ���� first�� top���� ������ pop���ش�
////				while (!s[temp.first].empty() && temp.second<s[temp.first].top()) {
////					s[temp.first].pop();
////					count++;
////				}
////				if (!s[temp.first].empty() && s[temp.first].top() == temp.second)
////					continue;
////				s[temp.first].push(temp.second);
////				count++;
////			}
////		}
////		
////	}
////	cout << count;
////	return 0;
////	//////////////////////�ؿ� �ð��ʰ� �������� Ǯ��
////	///!s[temp.first].empty() && �־���ߵǳ�..?
////}
//#include <iostream>
//#include <stack>
//using namespace std;
//
//
////���� ���� ���� ������ ġ�� count++���ش�. �ٽ� ���� ���� ��������
////count �� ��ŭ ans ++
////�տ��� ���� ģ ���� ������ ������ no count �Ѵ�.
//
//int N, P;
//
//int main(void){
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> N >> P;
//
//	stack<int> s[7]; //�� 1 ~ 6
//	int result = 0;
//	for (int i = 0; i < N; i++)
//	{
//		pair<int, int> temp;
//		cin >> temp.first >> temp.second;
//		if (s[temp.first].empty())//���� ����ִٸ�
//		{
//			result++;
//			s[temp.first].push(temp.second);//�� ���� ���� ����
//		}
//		else
//		{
//			if (temp.second > s[temp.first].top())
//			{
//				s[temp.first].push(temp.second);
//				result++;
//			}
//			else if (temp.second == s[temp.first].top())
//				continue;
//			else
//			{//���� ���� first�� top���� ������ pop���ش�
//				while (!s[temp.first].empty() && temp.second < s[temp.first].top())
//				{
//					s[temp.first].pop();
//					result++;
//				}
//				if (!s[temp.first].empty() && s[temp.first].top() == temp.second)
//					continue;
//				s[temp.first].push(temp.second);
//				result++;
//			}
//		}
//	}
//	cout << result << "\n";
//	return 0;
//	//!s[temp.first].empty() && �־���ߵǳ�..?
//}