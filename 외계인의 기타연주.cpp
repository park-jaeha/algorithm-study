////#include<iostream>
////#include<stack>
////using namespace std;
////
//////같은 줄의 높은 프랫을 치면 count++해준다. 다시 같은 프랫 내려갈때
//////count 한 만큼 ans ++
//////앞에서 먼저 친 같은 프랫이 있으면 no count 한다.
////
////
////int main() {
////	ios_base::sync_with_stdio(0);
////	cin.tie(0);
////
////	int n, p;//n은 음의 수, p는 프렛의 수
////	int count = 0;
////	int temp = 0;
////	scanf("%d %d", &n, &p);
////	stack<int> s[7];//기타줄 1~6까지
////	for (int i = 0; i < n; i++) {
////		pair<int, int> temp;
////		cin >> temp.first >> temp.second;
////		if (s[temp.first].empty()) {//줄이 비어있다면
////			count++;
////			s[temp.first].push(temp.second);//그 줄의 프랫 저장
////		}
////		else {
////			if (temp.second > s[temp.first].top()) {
////				s[temp.first].push(temp.second);
////				count++;
////			}
////			else if (temp.second == s[temp.first].top()) {
////				continue;
////			}
////			else {//받은 음이 first의 top보다 작을때 pop해준다
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
////	//////////////////////밑에 시간초과 스택으로 풀기
////	///!s[temp.first].empty() && 넣어줘야되네..?
////}
//#include <iostream>
//#include <stack>
//using namespace std;
//
//
////같은 줄의 높은 프랫을 치면 count++해준다. 다시 같은 프랫 내려갈때
////count 한 만큼 ans ++
////앞에서 먼저 친 같은 프랫이 있으면 no count 한다.
//
//int N, P;
//
//int main(void){
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> N >> P;
//
//	stack<int> s[7]; //줄 1 ~ 6
//	int result = 0;
//	for (int i = 0; i < N; i++)
//	{
//		pair<int, int> temp;
//		cin >> temp.first >> temp.second;
//		if (s[temp.first].empty())//줄이 비어있다면
//		{
//			result++;
//			s[temp.first].push(temp.second);//그 줄의 프랫 저장
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
//			{//받은 음이 first의 top보다 작을때 pop해준다
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
//	//!s[temp.first].empty() && 넣어줘야되네..?
//}