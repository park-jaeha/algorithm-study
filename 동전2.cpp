#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int ans = 0;
int sum = 0;


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	int count = 0;
	cin >> n >> k;
	int num[100];
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	sort(num, num + n, less<int>());
	for (int i = n - 1; i <= 0; i--) {
		if (num[i] > k) {//���ϴ� ��ġ���� Ŭ ���
			continue;
		}
		if (num[i] == k) {//������ ��ġ�� ���ϴ� ��
			ans = 1;
			break;
		}
		if (num[i] < k) {
			while (sum < k) {
				sum += num[i];
				count++;
				///////////////////////////
			}
		}
	}
}