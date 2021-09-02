#include<iostream>
#include<algorithm>
using namespace std;

const int MAX = 100000;

int n, m;
int money[MAX];

bool chk(int mid) {
	int cnt = 1;
	int sum = mid;
	for (int i = 0; i < n; i++) {
		if (mid < money[i])
			return false;//�Ϸ� �� ������ ���� �����ؾ���
		if (sum - money[i] < 0) {
			sum = mid;
			cnt++;
		}
		sum -= money[i];
	}
	return m >= cnt;
}

//�̺�Ž���� �Ἥ �߰����� ���Ѵ�.
//mȸ��� ���������� �ִ�. ��Ÿ������ ���
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;//n�� ��¥ m�� ����Ƚ��
	int sum = 0;
	int result=0;
	for (int i = 0; i < n; i++) {
		cin >> money[i];
		sum += money[i];
	}
	int left = 1, right = sum;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (chk(mid)) {
			result = mid;
			right = mid - 1;
		}
		else
			left = mid + 1;
	}
	cout << result;
}