///* ·Îº¿Ã»¼Ò±â »ï¼º
//d 0 ºÏÂÊ 1 µ¿ 2 ³² 3 ¼­
//*/
//#include<cstdio>
//#include<queue>
//using namespace std;
//int map[53][53];
//int dx[4] = { 0,-1, 0, 1 };
//int dy[4] = {-1, 0, 1, 0 };
//int N, M;
//int r, c, d;
//int cnt;
//queue<pair <int, pair<int, int>> > q;
//void bfs() {
//	int dir = q.front().first;
//	int nowX = q.front().second.first;
//	int nowY = q.front().second.second;
//	if (map[nowX][nowY] != '1'){
//
//	
//	}
//	while (!q.empty()) {
//
//	}
//}
//int main() {
//	scanf("%d %d", &N, &M);
//	scanf("%d %d %d", &r,&c,&d);
//	q.push({ d,{r,c} });
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//			scanf("%d", &map[i][j]);
//	int nx, ny;
//	bool f = 1;
//	while (f) {
//
//		if (map[r][c] == 0) cnt++;
//		
//		map[r][c] = 2;
//
//		for (int i = 0; i < 5; i++) {
//			if (i == 4) {
//				nx = r + dx[(d+3)%4];
//				ny = c + dy[(d+3)%4];
//				if (map[nx][ny] != 1) {
//					r = nx;
//					c = ny;
//				}
//				else { //º®ÀÌ´Ù
//					f = 0;
//				}
//				break;
//			}
//
//			nx = r + dx[d];
//			ny = c + dy[d];
//			d = (d + 3) % 4; //´ÙÀ½ ¿ÞÂÊ 
//			if (!map[nx][ny]) {
//				r = nx;
//				c = ny;
//				break;
//			}
//		}
//	}
//
//
//	printf("%d\n", cnt);
//
//	return 0;
//}