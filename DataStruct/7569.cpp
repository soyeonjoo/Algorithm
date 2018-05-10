///* 7569 토마토  응용문제*/
///* 정수 1은 익은 토마토,
//   정수 0 은 익지 않은 토마토,
//   정수 -1은 토마토가 들어있지 않은 칸*/
//
//
//#include<cstdio>
//#include<cstring>
//#include<queue>
//
//using namespace std;
//
//int M, N,H;
//int dx[6] = { 1, 0, -1, 0, 0, 0 };
//int dy[6] = { 0, 1, 0, -1, 0, 0 };
//int dz[6] = { 0, 0, 0, 0, 1, -1 };
//int map[102][102][102];
//int visited[102][102][102];
//int tomato = 1;
//int cnt;
//queue<pair< int, pair<int, int>>>q;
//int nextX, nextY, nextZ;
//int nowZ, nowX, nowY;
//
//bool check(int z, int x, int y) {
//	if (z >= 0 && x >= 0 && y >= 0 && z < H && x < N && y < M)return true;
//	return false;
//}
//
//void bfs() {
//		while (!q.empty()) {
//			nowZ = q.front().first;
//			nowX = q.front().second.first;
//			nowY = q.front().second.second;
//			q.pop();
//			for (int i = 0; i < 6; i++) {
//				nextX = nowX + dx[i];
//				nextY = nowY + dy[i];
//				nextZ = nowZ + dz[i];
//				if (check(nextZ, nextX, nextY) && map[nextZ][nextX][nextY] == 0) {
//					map[nextZ][nextX][nextY] = 1;
//					visited[nextZ][nextX][nextY] = visited[nowZ][nowX][nowY] + 1;
//					q.push({ nextZ,{ nextX ,nextY} });
//				}
//			}
//	}
//}
//
//int main() 
//{
//	cnt = 0;
//	scanf("%d %d %d", &M, &N, &H);
//	for (int k = 0; k < H; k++) {
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				scanf("%d", &map[k][i][j]);
//				if (map[k][i][j] == 1) q.push({ k,{i,j} });
//				if (map[k][i][j] == 0) tomato = 0;
//			}
//		}
//
//	}
//
//	if (tomato != 0) {
//		printf("0\n");  return 0;
//	}
//	else {
//		bfs();
//		for (int k = 0; k < H; k++) {
//			for (int i = 0; i < N; i++) {
//				for (int j = 0; j < M; j++) {
//					if (map[k][i][j] == 0) { printf("-1\n"); return 0; }
//					if (cnt < visited[k][i][j]) cnt = visited[k][i][j];
//				}
//
//			}
//		}
//		printf("%d\n", cnt);
//	}
//	return 0;
//}