#include<stdio.h>
#include<queue>
#pragma warning(disable:4996)
using namespace std;

int main() {
	int test;
	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		int n;
		int m;
		int index = 0;
		scanf("%d %d",&n, &m);
		queue <pair<int,int>> q;//케이스 받을 큐
		priority_queue<int> pq;//우선순위 큐
		for (int j = 0; j < n; j++) {
			int num;//숫자 받을 변수
			scanf("%d", &num);
			q.push({ j,num });
			pq.push(num);
		}
		while (!q.empty()) {
			int a = q.front().first;
			int b = q.front().second;
			q.pop();
			if (pq.top() == b) {
				index++;
				pq.pop();
				if (a==m) {
					printf("%d\n", index);
					break;
				}
			}
			else{
				q.push({ a,b});
			}
		}
	}
	return 0;
}