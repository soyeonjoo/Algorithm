///* 11724 연결요소 dfs 제일 기본적!  */
//
//#include<stdio.h>
//#include<stdlib.h>
//
//
//int N, M; //정점, 간선
//int map[1005][1005];
//int x, y; 
//int visited[1005];
//int cnt;
//
//void dfs(int cur) {
//	visited[cur] = 1;
//	for (int i = 1; i <= N; i++) {
//		if (!visited[i] && map[cur][i]) {
//			dfs(i);
//		}
//	}
//}
//int main() {
//	scanf("%d %d", &N, &M);
//	for (int i = 0; i < M; i++) {
//		scanf("%d %d", &x, &y );
//		map[x][y] = map[y][x] = 1;
//	}
//	for (int i = 1; i <= N; ++i) {
//		if (!visited[i]) {
//			cnt++;
//			dfs(i);
//		}
//	}
//	printf("%d", cnt);
//	return 0;
//}