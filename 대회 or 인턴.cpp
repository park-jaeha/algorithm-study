#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int n, m, k;
/////k는 n또는 m에서 꺼내는 것이다.
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m >> k;
	int ans;
	cout << min(min(n / 2, m), (n + m - k) / 3) << "\n";
	return 0;
}