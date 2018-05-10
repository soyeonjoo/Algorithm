//#include<stdio.h>
//
////int tc;
////int N;
////int M;
////int main() {
////
////	scanf("%d", &tc);
////	while (tc--) {
////		scanf("%d %d" &N, &M);
////		for(int i = 0 ; i < M; i++) for(int j = 0 ; j<4; j++) scnaf("%d")
////	}
////
////
////	return 0;
////}
//
//vector<pair<int, int> > graph[111][111];
//bool visited[111][111];
//bool light[111][111];
//int N, M;
//int x_move[4] = { 0, 1, 0, -1 };
//int y_move[4] = { 1, 0, -1, 0 };
//inline int _abs(int n) { return n > 0 ? n : -n; }
//
//bool is_nearby(int x, int y) {
//	for (int i = 0; i<4; i++) {
//		int nx = x + x_move[i];
//		int ny = y + y_move[i];
//		if (1 <= nx && nx <= N && 1 <= ny && ny <= N && light[nx][ny] && visited[nx][ny]) {
//			return true;
//		}
//	}
//	return false;
//}
//void dfs(int x, int y) {
//	if (visited[x][y]) return;
//	visited[x][y] = true;
//
//	for (int i = 0; i<graph[x][y].size(); i++) {
//		int tx = graph[x][y][i].first;
//		int ty = graph[x][y][i].second;
//		if (!light[tx][ty]) {
//			light[tx][ty] = true;
//			if (is_nearby(tx, ty)) {
//				dfs(tx, ty);
//			}
//		}
//	}
//	for (int i = 0; i<4; i++) {
//		int nx = x + x_move[i];
//		int ny = y + y_move[i];
//		if (1 <= nx && nx <= N && 1 <= ny && ny <= N && light[nx][ny]) {
//			dfs(nx, ny);
//		}
//	}
//}
//int main(void) {
//	scanf("%d %d", &N, &M);
//	int x, y, z, w;
//	for (int i = 0; i<M; i++) {
//		scanf("%d %d %d %d", &x, &y, &z, &w);
//		graph[x][y].push_back(make_pair(z, w));
//	}
//	light[1][1] = true;
//	//visited[1][1] = true;
//	dfs(1, 1);
//	int res = 0;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			res += light[i][j];
//		}
//	}
//	printf("%d\n", res);
//	return 0;
//}
//
//
