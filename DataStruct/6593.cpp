 //#include<cstdio>
//#include<cstring>
//#include <algorithm>
//#include<queue>
//using namespace std;
//int L, R, C;
//char map[34][34][34];
//int visited[34][34][34];
//int dx[6] = { 0, 0, -1, 1, 0, 0 };
//int dy[6] = { 1, -1, 0, 0, 0, 0 };
//int dz[6] = { 0, 0, 0, 0, 1, -1 }; // 상하 층이동
//
//int sx, sy, sz;
//int ex, ey, ez;
//
//void dfs(int z, int x, int y) {
//	int nextX, nextY, nextZ;
//
//	if (map[z][x][y] == 'E') return;
//
//	for (int i = 0; i < 6; i++) {
//		nextZ = z + dz[i];
//		nextX = x + dx[i];
//		nextY = y + dy[i];
//		if (nextZ >= 0 && nextX >= 0 && nextY >= 0 && nextZ < L && nextX < R && nextY < C) {
//			if ((map[nextZ][nextX][nextY] == '.'  || map[nextZ][nextX][nextY] == 'E') && !visited[nextZ][nextX][nextY]) {
//				visited[nextZ][nextX][nextY] = visited[z][x][y] + 1;
//				dfs(nextZ, nextX, nextY);
//			}
//			
//
//		}
//	}
//		
//
//}
//
//bool isPossible(int z, int y, int x) {
//	return ((z >= 0 && y >= 0 && x >= 0 && z < L && y < R && x < C));
//}
//
//
//int main() {
//	int startZ, startY, startX;
//
//	while (1) {
//
//		memset(map, 0, sizeof(map));
//		memset(visited, 0, sizeof(visited));
//
//		scanf("%d %d %d", &L, &R, &C);
//
//		if (L == 0 && R == 0 && C == 0) break;
//
//
//		for (int i = 0; i < L; i++) {
//			for (int j = 0; j < R; j++) {
//				scanf("%s", &map[i][j]);
//				for (int k = 0; k < C; k++) {
//					if (map[i][j][k] == 'S') {// 's'의 위치
//						sz = i;
//						sx = j;
//						sy = k;
//					}
//					if (map[i][j][k] == 'E') { //'e'의 위치 
//						ez = i;
//						ex = j;
//						ey = k;
//					}
//					
//				}
//			}getchar();
//		}
//
//		dfs(sz, sx, sy);
//		
//		
//
//		/*if (visited[ez][ex][ey] > 0) {
//			printf("Escaped in %d minute(s).\n", visited[ez][ex][ey]);
//		}
//		else {
//			printf("Trapped!\n");
//		}*/
//
//
//	/*	queue < pair < int, pair<int, int> > > Qu;
//		Qu.push(make_pair(startZ, make_pair(startY, startX)));
//		int cnt = 0;
//		bool complete = false;
//		while (true) {
//			bool changed = false;
//			cnt++;
//			int sz = Qu.size();
//			for (int i = 0; i < sz; i++) {
//				int curZ = Qu.front().first;
//				int curY = Qu.front().second.first;
//				int curX = Qu.front().second.second;
//				Qu.pop();
//				for (int j = 0; j < 6; j++) {
//					int nextZ = curZ + dz[j];
//					int nextY = curY + dx[j];
//					int nextX = curX + dy[j];
//					if (isPossible(nextZ, nextY, nextX) && (map[nextZ][nextY][nextX] != '#')) {
//						if (map[nextZ][nextY][nextX] == 'E') {
//							complete = true;
//							break;
//						}
//						changed = true;
//						map[nextZ][nextY][nextX] = '#';
//						Qu.push(make_pair(nextZ, make_pair(nextY, nextX)));
//					}
//				}
//				if (complete)
//					break;
//			}
//			if (!changed || complete)
//				break;
//		}*/
//		if (visited[ez][ex][ey] > 0)
//			printf("Escaped in %d minute(s).\n", visited[ez][ex][ey]);
//		else
//			puts("Trapped!\n");
//	}
//
//
//	
//	return 0;
//}

/* dfs 실패 질문하기*/
//
//#include<cstdio>
//#include<cstring>
//#include <algorithm>
//#include<queue>
//using namespace std;
//int L, R, C;
//char map[34][34][34];
//int visited[34][34][34];
//int dx[6] = { 0, 0, -1, 1, 0, 0 };
//int dy[6] = { 1, -1, 0, 0, 0, 0 };
//int dz[6] = { 0, 0, 0, 0, 1, -1 }; // 상하 층이동
//
//int sx, sy, sz;
//int ex, ey, ez;
//
//void dfs(int z, int x, int y) {
//	int nextX, nextY, nextZ;
//
//	if (map[z][x][y] == 'E') return;
//
//	for (int i = 0; i < 6; i++) {
//		nextZ = z + dz[i];
//		nextX = x + dx[i];
//		nextY = y + dy[i];
//		if (nextZ >= 0 && nextX >= 0 && nextY >= 0 && nextZ < L && nextX < R && nextY < C) {
//			if ((map[nextZ][nextX][nextY] == '.'  || map[nextZ][nextX][nextY] == 'E') && !visited[nextZ][nextX][nextY]) {
//				visited[nextZ][nextX][nextY] = visited[z][x][y] + 1;
//				dfs(nextZ, nextX, nextY);
//			}
//		}
//	}
//		
//
//}
//
//
//int main() {
//
//	while (1) {
//
//		memset(map, 0, sizeof(map));
//		memset(visited, 0, sizeof(visited));
//
//		scanf("%d %d %d", &L, &R, &C);
//
//		if (L == 0 && R == 0 && C == 0) break;
//
//
//		for (int i = 0; i < L; i++) {
//			for (int j = 0; j < R; j++) {
//				scanf("%s", &map[i][j]);
//				for (int k = 0; k < C; k++) {
//					if (map[i][j][k] == 'S') {// 's'의 위치
//						sz = i;
//						sx = j;
//						sy = k;
//					}
//					if (map[i][j][k] == 'E') { //'e'의 위치 
//						ez = i;
//						ex = j;
//						ey = k;
//					}
//					
//				}
//			}getchar();
//		}
//
//		dfs(sz, sx, sy);
//		
//		
//
//		if (visited[ez][ex][ey] > 0)
//			printf("Escaped in %d minute(s).\n", visited[ez][ex][ey]);
//		else
//			printf("Trapped!\n");
//	}
//
//
//	
//	return 0;
//}