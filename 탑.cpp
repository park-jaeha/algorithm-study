#include<iostream>
#include<stack>
#define MAX 500000
#pragma warning(disable:4996)
using namespace std;

stack<pair<int, int>>s;

int n;//ž�� ��
//��ȣ�� �����ʿ��� �������� �����ϸ� ���̰� �� ���� ž�� ������
//�ٷ� stop
int temp;
int main() {
	ios_base::sync_with_stdio();
	cin.tie();

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		int num;
		scanf("%d", &num);
		while (!s.empty()) {
			if (s.top().second > num) {
				printf("%d ", s.top().first);
				break;
			}
			s.pop();
		}
		if (s.empty())
			printf("0 ");
		s.push(make_pair(i, num));
	}
	return 0;
}