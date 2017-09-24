//#include<stdio.h>
//#include<stdlib.h>
//
//int connectNode, computer, count;
//int map[101][101];
//int visit[101];
//
//void dfs(int v) {
//	++count;
//	visit[v] = 1;
//	for (int k = 1; k <= computer; k++) {
//		if (!visit[k] && map[v][k]) {
//			dfs(k);
//		}
//	}
//}
//
//int main() {
//	
//	scanf("%d", &computer);
//	scanf("%d", &connectNode);
//	int a, b;
//	for (int i = 0; i < connectNode; i++) {
//		scanf("%d %d", &a, &b);
//		map[a][b] = map[b][a] = 1;
//
//	}
//	dfs(1);
//	printf("%d", count - 1);
//	return 0;
//}