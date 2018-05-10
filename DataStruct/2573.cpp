//#include <cstdio>
//#include<cstring>
//int components;
//int time = 0;
//int map[303][303];
//int meltmap[303][303];
//int visited[303][303];
//int N, M;
//int dx[4] = { 0, 0, 1, -1 };
//int dy[4] = { 1, -1, 0, 0 };
//
//void dfs(int x, int y) {
//	visited[x][y] = 1;
//	for (int i = 0; i < 4; i++) {
//		int nextX = x + dx[i];
//		int nextY = y + dy[i];
//		if (nextX >= 0 && nextY >= 0 && nextX < N  && nextY < M) {
//			if (visited[nextX][nextY] == 0 && map[nextX][nextY] > 0)
//				dfs(nextX, nextY);
//		}
//		
//	}
//}
//int meltSearch(int x, int y) {
//	int cnt = 0;
//	int rr, cc;
//	for (int k = 0; k < 4; k++) {
//		rr = x + dx[k];
//		cc = y + dy[k];
//		if (map[rr][cc] == 0 ) ++cnt;
//	}
//
//	return cnt;
//}
//
//int main() {
//	
//	scanf("%d %d", &N, &M);
//	
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			scanf("%d", &map[i][j]);
//		}
//	}
//	while (1) {
//		components = 0;
//		memset(visited, 0, sizeof(visited));
//		
//		//사이클 개수 구하기
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				if (visited[i][j] == 0 && map[i][j] > 0) {
//					dfs(i, j);
//					components++;
//				//	printf("%d", components);
//				}
//			}
//
//		}
//
//		if (components >= 2) {
//			printf("%d", time);
//			break;
//		}
//		if (components == 0) {
//			printf("0");
//			break;
//		}
//
//		memset(meltmap, 0, sizeof(meltmap));
//		time++;
//		//얼음 녹이기
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				if (map[i][j] > 0 ) { // 숫자가있을때 동서남북 0 확인
//					meltmap[i][j] = map[i][j] - meltSearch(i, j);
//					if (meltmap[i][j] < 0) meltmap[i][j] = 0;
//				}
//			}
//		}
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				map[i][j] = meltmap[i][j];
//			}
//		}
//	}
//	
//	return 0;
//}