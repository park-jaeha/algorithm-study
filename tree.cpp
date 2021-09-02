#include<iostream>
#include<fstream>
using namespace std;

int x[100][1000000], y[100][1000000];
int main() {
	ifstream fin;
	fin.open("tree.inp");
	if (!fin) {
		cout << "파일열기실패";
		return 0;
	}
	ofstream fout("tree.out");
	if (!fout) {
		cout << "파일열기실패";
		return 0;
	}
	int i = 0;
	int j = 0;
	while (1) {
		fin >> x[j][i] >> y[j][i];	
		if ((x[j][i] == 0) && (y[j][i] == 0)) {	
			///////for문 작성해야됨 트리인지 확인
			int rootc = 0;
			int root = 0;
			for (int k = 0; k < i; k++) {
				int count = 0;
				for (int l = 0; l < i; l++) {
					if (x[j][k] == y[j][l]) {
						count++;
					}
				}
				if (count == 0) {
					if (x[j][root] == x[j][k])
						continue;
					rootc++;
					root = k;
				}
				if (count > 1) {
					cout << "Test Case " << j + 1 << ": " <<-1<<endl;
					fout << "Test Case " << j + 1 << ": " << -1<<endl;
					goto back;
					break;
				} 
				if (rootc > 1) {
					cout << "Test Case " << j + 1 << ": " << -1 << endl;
					fout << "Test Case " << j + 1 << ": " << -1 << endl;
					goto back;
					break;
				}
			}
			cout << "Test Case " << j + 1 << ": " << x[j][root]<<endl;
			fout << "Test Case " << j + 1 << ": " << x[j][root] << endl;
		back:;
			i = 0;
			j++;
		}
		if ((x[j][i] == -1) && (y[j][i] == -1)) {
			break;
		}
		i++;
	}
	fin.close();
	fout.close();
	return 0;
}