///* 1012 - 유기농 배추 dfs*/
//
//#include<stdio.h>
//#include<stdlib.h>
//int test;
//int M, N, K; // 가로길이 M 세로길이 N 배추갯수 K
//int map[51][51];
//int visited[51][51];
//int count;
//int fx[4] = {0,0,1,-1};
//int fy[4] = {1,-1,0,0};
// 
//void init() {//초기화
//	count = 0;
//	for (int i = 0; i <M ; i++) {
//		for (int j = 0; j < N; j++) {
//			map[i][j] = visited[i][j] = 0;
//		}
//	}
//}
//
//void dfs(int x, int y) {//한정점에서 탐색
//	for (int i = 0; i < 4; i++) {
//		int x_next = x + fx[i];
//		int y_next = y + fy[i];
//		if (x_next >= 0 && x_next < M && y_next >= 0 && y_next < N) {
//			if (!visited[x_next][y_next] && map[x_next][y_next] == 1) {
//				visited[x_next][y_next] = 1;
//				dfs(x_next, y_next);
//
//			}
//		}
//	}
//}
//
//void search() {// 배추밭탐색
//	for (int i = 0; i < M; i++) {
//		for (int j = 0; j < N; j++) {
//			if (!visited[i][j] && map[i][j] == 1) {
//				visited[i][j] = 1;
//				count++;
//				dfs(i,j);
//			}
//		}
//	}
//}
//
//
//int main() {
//	int x, y;
//	scanf("%d", &test);
//	for (int i = 0; i < test; i++) {
//
//		scanf("%d %d %d", &M, &N, &K);
//		for (int i = 0; i < K; i++) {
//			scanf("%d %d", &x, &y);
//			map[x][y] = 1;
//		}
//		search();
//		printf("%d\n",count);
//		init();
//	}
//	return 0;
//}