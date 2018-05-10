//#include<stdio.h>
//int TC;
//int R, C;
//char map[6][20];
//int visited[6][20];
//int  min = 100000;
//
//int dx[6] = { 0, 0, -1, 1 };
//int dy[6] = { 1, -1, 0, 0 };
//
//int nextX1, nextY1, nextX2, nextY2;
//int rx, ry, bx, by;
//
//
//int check(int x, int y) {
//	if (x >= 0 && y >= 0 && x < R && y < C) return 1;
//
//	return 0;
//
//}
//void dfs(int x1, int y1, int x2, int y2) {
//	if (x1 == x2 && y1 == y2) {
//		printf("값이 같을때,");
//		return;
//	}
//	if (map[x1][y1] == 'H') {
//		printf("(((((((((((((((");
//		if (min > visited[x1][y1]) min = visited[x1][y1];
//		return;
//	}
//	for (int i = 0; i < 4; i++) {
//		nextX1 = x1 + dx[i];
//		nextY1 = y1 + dy[i];
//		nextX2 = x2 + dx[i];
//		nextY2 = y2 + dy[i];
//
////		if (check(nextX1, nextY1) == 1 && check(nextX2, nextY2) == 1) {
//		if (check(nextX1, nextY1) == 1 ) {
//
//			if (map[nextX2][nextY2] == '#') {
//				nextX2 = x2;
//				nextY2 = y2;
//			}
//			//printf("&&&&&visited = %d, nextX1 = %d, nextY1 = %d, nextX2 = %d, nextY2 = %d \n", visited[nextX1][nextY1], nextX1, nextY1, nextX2, nextY2);
//			//printf("문자 : %c\n", map[nextX1][nextY1]);
//			if ((map[nextX1][nextY1] == 'H' || map[nextX1][nextY1] =='.') && visited[nextX1][nextY1] == 0) {
//				//if (!(nextX1 == nextX2  && nextY1 == nextY2)) {
//					visited[nextX1][nextY1] = visited[x1][y1] + 1;
//					printf("visited = %d, x1 = %d, y1 = %d, x2 = %d, y2 = %d \n", visited[nextX1][nextY1], nextX1, nextY1, nextX2, nextY2);
//					dfs(nextX1, nextY1, nextX2, nextY2);
//				//}
//			}
//		}
//	}
//}
//
//int main() {
//
//	scanf("%d", &TC);
//
//	while (TC--) {
//		scanf("%d %d", &R, &C);
//
//		for (int i = 0; i < R; i++) {
//			for (int j = 0; j < C+1; j++) {
//				scanf("%c", &map[i][j]);
//				if (map[i][j] == 'R') {// 's'의 위치 빨간공
//					rx = i;
//					ry = j;
//					map[i][j] = '.';
//				}
//				if (map[i][j] == 'B') { //'b'의 위치 파란공
//					bx = i;
//					by = j;
//					map[i][j] = '.'; 
//				}
//				if (map[i][j] == 'H') { //'b'의 위치 파란공
//					printf("구멍의 x = %d, y= %d", i, j);
//				}
//				
//			}
//
//		}
//	dfs(rx, ry, bx, by);
//		/*for (int i = 0; i < R; i++) {
//			for (int j = 0; j <= C; j++) { printf("%c", map[i][j]); }
//		}*/
//		printf("%d", min);
//}
//return 0;
//}