#include<iostream>
#include<string>
using namespace std;


char arr1[1001];
char arr2[1001];

int n, m;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie();
	int i = 0;
	int j = 0;
	string s1, s2;
	cin >> s1;
	cin >> s2;

	strcpy_s(arr1, s1.c_str());
	strcpy_s(arr2, s2.c_str());
	n = s1.length();
	m = s2.length();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			
		}
	}
	cout << arr1 << "\n" << arr2<<"\n";
	return 0;

}