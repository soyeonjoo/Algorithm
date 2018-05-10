//#include <stdio.h>
//int N, W;
//int map[1010][1010];
//int sol;
//int list[1003][2];
//
//int min(int a, int b) { return a > b ? b : a; }
//
//int max(int a, int b) { return a > b ? a : b; }
//
//int abs(int n) { return n < 0 ? -n : n; }
//
//int dist(int pos, int next) { 
//	return abs(list[pos][0] - list[next][0]) + abs(list[pos][1] - list[next][1]); 
//}
//
//int solve(int a, int b) {
//	int next = 1 + max(a, b);
//	if (next == W) return 0;
//	int temp = map[a][b];
//	if (map[a][b] != -1)return map[a][b];
//
//	int dist1 = dist(a, next);
//	int dist2 = dist(b, next);
//	map[a][b] = min(dist1 + solve(next, b), dist2 + solve(a, next));
//	temp = map[a][b];
//	return temp;
//}
//
//void make_path(int a, int b) {
//	int next = max(a, b) + 1;
//	if (next == W)return;
//	int dist1 = dist(a, next);
//	int dist2 = dist(b, next);
//	if (dist1 + solve(next, b) < dist2 + solve(a, next)) {
//		make_path(next, b);
//	}
//	else {
//		make_path(a, next);
//	}
//}
//
//int main() {
//	scanf("%d", &N);
//	scanf("%d", &W);
//	W += 2;
//	for (int i = 0; i <= N; i++)for (int j = 0; j <= N; j++) map[i][j] = -1;
//	list[0][0] = 1; list[0][1] = 1;
//	list[1][0] = N; list[1][1] = N;
//	for (int i = 2; i < W; i++) {
//		scanf("%d %d", &list[i][0], &list[i][1]);
//	}
//
//	printf("%d\n", solve(0, 1));
//	make_path(0, 1);
//	return 0;
//}