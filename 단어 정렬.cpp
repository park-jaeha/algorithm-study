//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<functional>
//#define MAX 20001
//using namespace std;
//
//int n;
//
//bool compare(string a, string b) {
//	if (a.size() == b.size()) {
//		return a < b;
//	}
//	else {
//		return a.size() < b.size();
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie();
//	vector <string> a;
//	string temp;
//
//	cin >> n;
//	//길이로 분류하고 같으면 사전 순으로 같은 문자열은 삭제
//	for (int i = 0; i < n; i++) {
//		string word;
//		cin >> word;
//		a.push_back(word);
//	}
//	sort(a.begin(), a.end(), compare);
//	for (int i = 0; i < n; i++) {
//		if (temp == a[i])
//			continue;
//		cout << a[i] << "\n";
//		temp = a[i];
//	}
//	return 0;
//}