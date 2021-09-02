//#include<stdio.h>
//#include<iostream>
//#include<string>
//#include<stack>
//#pragma warning(disable:4996)
//using namespace std;
//
//char word[100000];
//
//int main() {
//	int n;
//	int leng = 0;
//	char temp;
//	cin >> n;
//	int count = 0;
//	//for (int i = 0; i < n; i++) {
//	//	stack<char> a;
//	//	scanf("%s", word);
//	//	a.push(word[0]);
//	//	leng = strlen(word);
//	//	for (int j = 1; j <  leng; j++) {
//	//		temp = word[j];
//	//		if (!a.empty() && temp == a.top()) {
//	//			a.pop();
//	//		}
//	//		else
//	//			a.push(temp);
//	//	}
//	//	if (a.empty())
//	//		count++;
//	//}
//	for (int i = 0; i < n; i++) {
//		string word;
//		stack<char> a;
//		cin>>word;
//		for (int j = 0; j < word.length(); j++) {
//			if (!a.empty()) {
//				if (word[j] == a.top())	a.pop();
//				else
//					a.push(word[j]);
//			}
//			else
//				a.push(word[j]);
//		}
//		if (a.empty())
//			count++;
//	}
//	printf("%d", count);
//}