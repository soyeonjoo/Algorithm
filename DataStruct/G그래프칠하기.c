//#include<stdio.h>
//
//#define INF (0x4FFFFFFF)
//int N;
//int flight[14][14];
//int visited[14];
//int min = INF;
//
//int sum;
//void dfs(int cnt, int n) {
//
//	if (cnt > N && n == 0) {
//		if (sum < min) min = sum;
//		return;
//	}
//
//	for (int i = ((cnt == N) ? (0) : (1)); i < N; i++) {
//		if (!visited[i] && flight[n][i] != 0) {
//			visited[i] = 1;
//			sum += flight[n][i];
//			if (sum < min) dfs(cnt + 1, i);
//
//			sum = sum - flight[n][i];
//			visited[i] = 0;
//		}
//	}
//	return;
//}
//
//int main() {
//
//	scanf("%d", &N);
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			scanf("%d", &flight[i][j]);
//		}
//	}
//
//	dfs(1,0);
//
//	printf("%d", min);
//
//	return 0;
//}