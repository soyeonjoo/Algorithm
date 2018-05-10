/////* 2583 영역구하기 dfs*/
//
//#include<stdio.h>
//#include<stdlib.h>
//int M, N, K;
//int map[100][100];
//int count[100]; //영역의 넓이
//int t = -1; // 영역의 갯수
//void dfs(int x, int y) {
//	map[x][y] = 2;
//	if (x && !map[x - 1][y]) { count[t]++; dfs(x - 1, y); }
//	if (x<N-1 && !map[x + 1][y]) { count[t]++; dfs(x + 1, y);}
//	if (y && !map[x][y - 1]) { count[t]++; dfs(x, y - 1); }
//	if (y < M - 1 && !map[x][y + 1]) { count[t]++; dfs(x, y + 1); }
//}
//int asc(const void* x, const void* y) { return *(int*)x - *(int*)y; }
//int main() {
//	int x1, x2, y1, y2;
//	scanf("%d %d %d", &M, &N, &K);
//	
//	while (K--) {
//		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//		for (int x = x1; x < x2; x++) for (int y = y1; y < y2; y++) map[x][y] = 1;
//	}
//	for (int i = 0; i < N; i++) for (int j = 0; j < M; j++ ) if (!map[i][j]) {
//		count[++t]++;
//		dfs(i, j);
//	}
//	qsort(count, t + 1, 4, asc);
//	printf("%d\n",t+1);
//	for (int i = 0; i <= t;i++)printf("%d ", count[i]);
//	return 0;
//}
//
//
//
//
