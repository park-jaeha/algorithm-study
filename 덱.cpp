//#include<iostream>
//#include<deque>
//#include<string>
//using namespace std;
//
//// push_front, push_back, 
////pop_front, pop_back, 
////size, empty, front, back
//
//int n;//명령의 수
//deque<int> d;//덱 생성
//
//void push_front_(int num) {
//	d.push_front(num);
//}
//void push_back_(int num) {
//	d.push_back(num);
//}
//int pop_front_() {
//	if (d.empty()) {
//		return -1;
//	}
//	else {
//		int num = d.front();
//		d.pop_front();
//		return num;
//	}
//}
//int pop_back_() {
//	if (d.empty()) {
//		return -1;
//	}
//	else {
//		int num = d.back();
//		d.pop_back();
//		return num;
//	}
//}
//int size_() {
//	return d.size();
//}
//int empty_() {
//	if (d.empty()) {
//		return 1;
//	}
//	else
//		return 0;
//}
//int front_() {
//	if (d.empty()) {
//		return -1;
//	}
//	else {
//		int num = d.front();
//		return num;
//	}
//}
//int back_() {
//	if (d.empty()) {
//		return -1;
//	}
//	else {
//		int num = d.back();
//		return num;
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie();
//	
//	string od;
//	int num;
//	cin >> n;
//	while (n--) {
//		cin >> od;
//		if (od == "push_front") {
//			cin >> num;
//			push_front_(num);
//		}
//		else if (od == "push_back") {
//			cin >> num;
//			push_back_(num);
//		}
//		else if (od == "pop_front") {
//			cout << pop_front_() << endl;
//		}
//		else if (od == "pop_back") {
//			cout << pop_back_() << endl;
//		}
//		else if (od == "size") {
//			cout<<size_()<<endl;
//		}
//		else if (od == "empty") {
//			cout<< empty_()<<endl;
//		}
//		else if (od == "front") {
//			cout<< front_()<<endl;
//		}
//		else if (od == "back") {
//			cout<<back_()<<endl;
//		}
//	}
//
//	return 0;
//}