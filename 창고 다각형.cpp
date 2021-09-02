#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
typedef pair<int, int> s;

//기둥의 폭은 모두 1미터

int n;//기둥의 개수
int ans;//넓이
s arr[1000];
stack<s> square;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i].first >> arr[i].second;
	}
	sort(arr, arr + n);
	square.push(arr[0]);//제일 낮은 좌표저장
	int h = arr[0].second;
	int max;
	int w;
	for (int i = 1; i < n; i++) {
		if (h < arr[i].second) {//처음 h보다 클 경우
			max = 0;
			while (!square.empty()) {
				h = square.top().second;
				w = arr[i].first - square.top().first;
				max = max > h*w ? max : h*w;
				square.pop();
			}
			ans += max;
			square.push(arr[i]);
			h = arr[i].second;
		}
		else
			square.push(arr[i]);
	}
	while (!square.empty()) {
		h = square.top().second;
		w = square.top().first;
		int w2 = w;//대기값
		square.pop();
		while (!square.empty()) {
			if (h <= square.top().second) {
				w2 = square.top().first;
				break;
			}
			square.pop();
		}
		if (w2 == w)
			w = 1;
		else
			w -= w2;
		ans += h*w;
	}
	cout << ans;
}