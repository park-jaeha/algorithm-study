#include<iostream>
#include<fstream>
using namespace std;

int x,y;

int main() {
	ifstream fin;
	fin.open("numgame.inp");
	if (!fin) {
		cout << "파일열기실패";
		return 0;
	}
	ofstream fout("numgame.out");
	if (!fout) {
		cout << "파일열기실패";
		return 0;
	}
	fin >> x;
	for (int i = 0; i < x; i++) {
		fin >> y;
		for (int j = 0; j < y; j++) {

		}
	}
	fin.close();
	fout.close();
	return 0;
}