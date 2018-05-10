//#include<stdio.h>
//#include<cstdio>
//#include<cstring>
//#include<queue>
//
//using namespace std;
//int R, C;
//char map[101][101];
//int visited[101][101];
//int dr[4] = { 0,0,1,-1 };
//int dc[4] = { 1,-1,0,0 };
//char waterMap[101][101];
//int dx, dy, sx, sy;
//int water = 0;
//
//queue<pair<int, int>> q;
//queue<pair<int, int>> wq;
//
//
//void bfs() {
//
//}
//
//
//int main() {
//	scanf("%d %d", &R, &C);
//	
//	for (int i = 0; i < R; i++) {
//		scanf("%s", map[i]);
//		for (int j = 0; j < C; j++) {
//			if (map[i][j] == 'S') {//시작지점
//				sx = i;
//				sy = j;
//			}
//			if (map[i][j] == 'D') {
//				dx = i;
//				dy = j;
//			}
//			if (map[i][j] == '*') {
//				q.push({ i,j });
//			}
//		}
//	}
//
//	bfs();
//	return 0;
//}