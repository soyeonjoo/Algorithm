///* 나이트의 이동 bfs 문제 */
//#include<cstdio>
//#include<queue>
//#include<cstring>
//using namespace std;
//
//int T, l;
//int visited[304][304];
//int sx, sy, x2, y2;
//int cnt;
//int dx[8] = { 1, 2, 1, 2, -1, -2, -1, -2 };
//int dy[8] = { 2, 1, -2, -1, 2, 1, -2, -1 };
//
//queue<pair<int, int>> q;
//
//void bfs(int x, int y) {
//	
//	int nextX, nextY;
//
//	if (x == x2 && y == y2)return; 
//
//	q.push({ x,y });
//
//	while (!q.empty()) {
//		int nowX = q.front().first;
//		int nowY = q.front().second;
//
//
//		q.pop();
//		for (int i = 0; i < 8; i++) {
//			nextX = nowX + dx[i];
//			nextY = nowY + dy[i];
//			if (nextX >= 0 && nextY >= 0 && nextX < l && nextY < l && !visited[nextX][nextY] ) {
//				visited[nextX][nextY] = visited[nowX][nowY] +1;
//				q.push({ nextX, nextY });
//			}
//			
//		}
//	}
//}
//
//
//
//int main() {
//	scanf("%d", &T);
//
//	while (T--) {
//		cnt = 0;
//
//		scanf("%d", &l);
//
//		scanf("%d %d", &sx, &sy);
//		scanf("%d %d", &x2, &y2);
//
//		bfs(sx,sy);
//
//		printf("%d\n", visited[x2][y2]);
//		memset(visited, 0, sizeof(visited));
//
//	}
//
//	return 0;
//}