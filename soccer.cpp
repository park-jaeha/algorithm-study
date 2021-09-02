#include<iostream>
#include<fstream>
#include <stdio.h>
#pragma warning(disable:4996)
using namespace std;

int num;
int r;
int x;
int main() {
	ifstream fin;
	fin.open("soccer.inp");
	if (!fin) {
		cout << "파일열기실패";
		return 0;
	}
	ofstream fout("soccer.out");
	if (!fout) {
		cout << "파일열기실패";
		return 0;
	}
	FILE *fin2 = fopen("soccer.inp", "rt");
	FILE *fout2 = fopen("soccer.out", "wt");
	//fin >> x;
	//for (int i = 0; i < x; i++) {
	//	fin >> num >> r;//num은 팀수 r은 round
	//	int rank[20] = { 0, };
	//	for (int k = 0; k < 20; k++) {
	//		rank[k] = 1;
	//	}
	//	int score[20] = { 0, };
	//	int team[20] = { 0, };
	//	int goal[20] = { 0, };
	//	int lgoal[20] = { 0, };//잃은 골 수
	//	int agoal[20] = { 0, };//away일때 골 수
	//	for (int j = 0; j < r; j++) {//round만큼 돌림
	//	for (int k = 0; k < num ; k = k + 2) {//첫번째줄 받기
	//		fin >> team[k] >> team[k + 1];
	//		fin >> goal[k] >> goal[k + 1];
	//		lgoal[k] += goal[k + 1];
	//		lgoal[k + 1] += goal[k];

	//		printf("goal[%d] : %d\tgoal[%d] : %d\n", k, goal[k], k + 1, goal[k + 1]);
	//		if (goal[k] > goal[k + 1]) {
	//			score[k] += 3;
	//		}
	//		else if (goal[k] == goal[k + 1]) {
	//			score[k] += 1;
	//			score[k + 1] += 1;
	//		}
	//		else
	//			score[k + 1] += 3;
	//		if (k % 2 == 0) {
	//			agoal[k] += goal[k];
	//		}
	//		if ((k + 1) % 2 == 0) {
	//			agoal[k + 1] = goal[k + 1];
	//		}
	//	}
	//	printf("\n\n\n");
	//		
	//			int team1, team2, goal1, goal2;
	//		for (int t = 0; t < num*(num-1)/(num/2)-1; t++) {//한라운드에서 줄수
	//			for (int k = 0; k < num / 2; k++) {//줄에서의 경기
	//				fin >> team1 >> team2;
	//				fin >> goal1 >> goal2;
	//				for (int qwer = 0; qwer < num; qwer++) {
	//					if (team1 == team[qwer]) {
	//						goal[qwer] += goal1;
	//						agoal[qwer] += goal1;
	//						lgoal[qwer] += goal2;
	//						if (goal1 > goal2) {
	//							score[qwer] += 3;
	//						}
	//						if (goal1 == goal2) {
	//							score[qwer] += 1;
	//						}
	//					}
	//					if (team2 == team[qwer]) {
	//						goal[qwer] += goal2;
	//						lgoal[qwer] += goal1;
	//						if (goal1 < goal2) {
	//							score[qwer] += 3;
	//						}
	//						if (goal1 == goal2) {
	//							score[qwer] += 1;
	//						}
	//					}
	//				}
	//			}
	//		}
	//	}

	int score[21];
	int goal[21];
	int away[21];
	int lose[21];
	int rank[21] = { 0, };
	fscanf(fin2, "%d\n", &x);
	for (int i = 0; i < x; i++) {
		for (int y = 0; y < 20; y++) {
			rank[y] = 1;
			score[y] = 0;
			away[y] = 0;
			lose[y] = 0;
			goal[y] = 0;
		}
			int num, r;
			fscanf(fin2, "%d %d\n", &num, &r);
			for (int i = 0; i < r * 2 * (num - 1); i++)
			{
				for (int j = 0; j < num / 2; j++)
				{
					int team1, team2;
					fscanf(fin2, "%d %d ", &team1, &team2);
					fscanf(fin2, "%d %d", &goal[team1], &goal[team2]);
					away[team1] += goal[team1];
					lose[team1] += goal[team2];
					lose[team2] += goal[team1];
					if (goal[team1] > goal[team2]) {
						score[team1] += 3;
					}
					else if (goal[team1] == goal[team2]) {
						score[team1] += 1;
						score[team2] += 1;
					}
					else {
						score[team2] += 3;
					}
					if (j != num / 2 - 1)
					{
						fscanf(fin2, "\n");
					}
					else
					{
						fscanf(fin2, " ");
					}

				}
			}
			int equal = 0;
			int temp = 0;
		for (int h = 1; h < num+1; h++) {///////동점자처리수정해야됨
			for (int k = 1; k < num+1; k++) {
				if (h != k) {
					if (score[h] < score[k]){
						rank[h] += 1;
						if (equal == 1&&rank[h]==rank[temp]) {
							rank[h] += 1;
							equal = 0;
						}
						continue;
					}
					else if (score[h] == score[k]) {
					equal1:
						if (goal[h] - lose[h] < goal[k] - lose[k]) {
							rank[h] += 1;
							if (equal == 1 && rank[h] == rank[temp]) {
								rank[h] += 1;
								equal = 0;
							}
							continue;
						}
						else if (goal[h] - lose[h] == goal[k] - lose[k]) {
						equal2:
							if (away[h] < away[k]) {
								rank[h] += 1;
								if (equal == 1 && rank[h] == rank[temp]) {
									rank[h] += 1;
									equal = 0;
								}
							}
							else if (away[h] == away[k]) {
								temp = h;
								equal++;
							}
						}
						else
							continue;
					}
					else
						continue;
				
				
				}
			}
		}
		fout << "Test Case #" << i + 1 << ":";
		for (int u = 1; u < num+1; u++) {
			fout << rank[u]<< " ";
		}
		fout << endl;
	}
	fin.close();
	fout.close();
}