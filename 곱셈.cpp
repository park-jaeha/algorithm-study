//#include<iostream>
//#include<cmath>
//using namespace std;
//typedef long long int llt;
//
//int a, b, c;
//llt ans;
//
//llt _pow(llt a, llt b, llt c) {
//	if (b == 0) return 1;
//	ans = _pow(a, b / 2, c);
//	ans = ans*ans%c;
//	if (!(b % 2)) return ans;
//	else return ans*a%c;//b°¡ È¦¼öÀÏ°æ¿ì aÇÑ¹ø ´õ °öÇØÁÜ
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> a >> b >> c;
//	cout << _pow(a, b, c);
//	return 0;
//}