///* 2667 번호 붙이기 dfs*/
//#include<stdio.h>
//#include<stdlib.h>
//int N;
//int map[26][26];
//int visited[26][26];
//int apt[100000]; //단지갯수가 많을수있음주의~!
//
//int fx[4] = {0, 0, 1, -1};
//int fy[4] = {1, -1, 0, 0};
//int count;
//
//int compare(const void *first, const void*second) {
//	return *(int*)first - *(int*)second;
//}
//
//void dfs(int x, int y) {
//	for (int i = 0; i < 4; i++) {
//		int x_next = x + fx[i];
//		int y_next = y + fy[i];
//		if (x_next >= 0 && x_next < N && y_next >= 0 && y_next < N) {
//			if (!visited[x_next][y_next] && map[x_next][y_next]==1) {
//				apt[count-1]++;
//				visited[x_next][y_next] = 1;
//				dfs(x_next, y_next);
//			}
//		}
//	}
//
//}
//
//void search() {
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (!visited[i][j] && map[i][j] == 1) {
//				count++;
//				apt[count-1]++;
//				visited[i][j] = 1;
//				dfs(i, j);
//			}
//		}
//	}
//}
//int main() {
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			scanf("%1d", &map[i][j]);
//		}
//	}
//	search();
//	printf("%d\n", count);
//	qsort(apt, count, sizeof(int), compare);
//	
//	for (int i = 0; i < count; i++) {
//		printf("%d\n", apt[i]);
//	}
//	return 0;
//}