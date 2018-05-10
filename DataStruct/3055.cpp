//#include<cstdio>
//#include<queue>
//#include<cstring>
//
//using namespace std;
//int R, C;
//char map[101][101];
//int visited[101][101];
//int dr[4] = { 0, 0, 1,-1 };
//int dc[4] = { 1, -1, 0,0 };
//char waterMap[101][101];
//int dx, dy, sx, sy;
//int water = 0;
//
//
//queue<pair<int, int>> q;
//queue<pair<int, int>> wq;
//
//int nextX, nextY;
//int nowX, nowY;
//
////
////
////void waterAdd() {
////	if (water == 1) {
////		memset(waterMap, 0, sizeof(waterMap));
////		for (int i = 0; i < R; i++) {
////			for (int j = 0; j < C; j++) {
////				if (map[i][j] == '*') {
////					for (int k = 0; k < 4; k++) {
////
////				}
////
////			}
////		}
////	
////		for (int i = 0; i < R; i++) {
////			for (int j = 0; j < C; j++) {
////				if (waterMap[i][j] == '*') map[i][j] = '*';
////			}
////		}
////
////	}
////}
////
//
//int waterX, waterY;
//
//
//void bfs() {
//	
//	
//	q.push({ sx,sy });
//	
//	while (!q.empty()) {
//	
//		
//		nowX = q.front().first;
//		nowY = q.front().second;
//
//		q.pop();
//
//		if (map[nowX][nowY] == '*') {
//			for (int i = 0; i < 4; i++) {
//
//				int nextWaterX = nowX + dr[i];
//				int nextWaterY = nowY + dc[i];
//				if (nextWaterX >= 0 && nextWaterY >= 0 && nextWaterX < R && nextWaterY < C) {
//
//					if (map[nextWaterX][nextWaterY] == '.') {
//						map[nextWaterX][nextWaterY] = '*';
//						q.push({ nextWaterX, nextWaterY });
//					}
//				}
//			}
//		}
//
//		if (map[nowX][nowY] == 'S') {
//		   for (int i = 0; i < 4; i++) {
//				nextX = nowX + dr[i];
//				nextY = nowY + dc[i];
//				if (nextX >= 0 && nextY >= 0 && nextX < R && nextY < C) {
//					if (map[nextX][nextY] == '.' && !visited[nextX][nextY]) {
//						visited[nextX][nextY] = visited[nowX][nowY] + 1;
//						map[nextX][nextY] = 'S';
//						q.push({ nextX, nextY });
//						}
//					if (map[nextX][nextY] == 'D') {
//						visited[nextX][nextY] = visited[nowX][nowY] + 1;
//						return;
//					}
//				}
//			}
//		}
//	}
//}
//
//
//int main() {
//	scanf("%d %d", &R, &C);
//
//	for (int i = 0; i < R; i++) {
//			scanf("%s", &map[i]);
//			for (int j = 0; j < C; j++) {
//			if (map[i][j] == 'S') {//시작해야할 지점
//					sx = i;
//					sy = j;
//			}
//			if (map[i][j] == 'D') {//도착
//				dx = i;
//				dy = j;
//
//			}
//			
//			if (map[i][j] == '*') {
//				q.push({ i,j });

//			}
//
//		}
//	}
//
//	bfs();
//
//
//	if (visited[dx][dy] > 0 ) {
//			printf("%d",visited[dx][dy] );
//		}
//		else {
//			printf("KAKTUS");
//		}
//
//	return 0;
//}
