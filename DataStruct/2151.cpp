/* 2151 거울 설치
 #는 문  ! 거울이 올 수 있는곳 . 빛 통과 * 벽
 . 일때 움직이고 !일때 방향을 바꿀수있다 
//*/
/*#include<cstdio>
#include<queue>
#include<cstring>
#include<string.h>
using namespace std;
int N;
char map[51][51];
int mun[2][2];
int a = 0;
int visited[51][51][4];
int count,mir;
int ans=8888888;
queue<pair<int,pair<int, int>>> q;

int dx[4] = { 0,0, 1,-1 };
int dy[4] = { 1, -1, 0,0 };
int nowX, nowY, nextX, nextY, dir;
bool check(int x, int y) {
	if (x >= 0 && y >=0 && x<N && y<N )return true;
	return false;
}
void bfs() {
	int ux, uy, dox, doy, rx, ry, lx, ly;
	
	// 처음 시작에서 나아갈 방향 찾기
	for (int i = 0; i < 4; i++) {
		nextX = mun[0][0] + dx[i];
		nextY = mun[0][1] + dy[i];
		if (check(nextX, nextY) && map[nextX][nextY] != '*' ) {
			q.push({ i,{nextX*N + nextY, 0} });
		}
	}
	

	//! 찾거나 전진 
	while (!q.empty()) {
		dir = q.front().first;
		nowX = q.front().second.first/N; nowY = q.front().second.first % N;
		mir = q.front().second.second;
		q.pop();

		if (nowX == mun[1][0] && nowY == mun[1][1]) {
			ans = ans > mir ? mir : ans;
			continue;
		}

		if (map[nowX][nowY]=='.') {
			int nx = nowX + dx[dir]; int ny = nowY + dy[dir];
			if ( check(nx, ny) && map[nx][ny] != '*' ) 
				q.push({ dir,{ nx*N+ ny, mir  } });
		}
		
		if (map[nowX][nowY] == '!') {
			if (visited[nowX][nowY][dir]> mir) {
				visited[nowX][nowY][dir] = mir;
				if (dir == 0 || dir == 1) { //왼쪽 오른쪽은 거울 놓으면 위아래
					ux = nowX + dx[3];  uy = nowY + dy[3];
					dox = nowX + dx[2]; doy = nowY + dy[2];
					if (check(ux, uy) && map[ux][uy] != '*') 
						q.push({ 3, { ux*N + uy,mir + 1 } });
					
					if (check(dox, doy) && map[dox][doy] != '*') 
						q.push({ 2,{ dox*N + doy, mir + 1 } });
				
					int nx = nowX + dx[dir]; int ny = nowY + dy[dir];
					if (check(nx, ny) && map[nx][ny] != '*') 
						q.push({ dir,{ nx*N + ny, mir } });
				}

				else if (dir == 2 || dir == 3) {// 위아래는 거울놓으면 왼오
					rx = nowX + dx[0]; ry = nowY + dy[0];
					lx = nowX + dx[1]; ly = nowY + dy[1];

					if (check(rx, ry) && map[rx][ry] != '*') 
						q.push({ 0,{ rx*N + ry, mir + 1} });

					if (check(lx, ly) && map[lx][ly] != '*') 
						q.push({ 1,{ lx*N + ly, mir + 1 } });
		
					int nx = nowX + dx[dir]; int ny = nowY + dy[dir];
					if (check(nx, ny) && map[nx][ny] != '*') 
						q.push({ dir,{ nx*N + ny,mir } });
					
				}
			}//visi
		}//.!
	}//while
}



int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", map[i]);
		for (int j = 0; j < N; j++) {
			if (map[i][j] == '#') {// 문 위치
				mun[a][0] = i;
				mun[a][1] = j;
				a++;
			}
		}
	}
	memset(visited, 8888888, sizeof(visited));
	bfs();
	printf("%d\n", ans);

	return 0;
}*/

/* 2151 거울 설치
#는 문  ! 거울이 올 수 있는곳 . 빛 통과 * 벽
. 일때 움직이고 !일때 방향을 바꿀수있다
*/
//#include<cstdio>
//#include<queue>
//#include<cstring>
//#include<string.h>
//using namespace std;
//int N;
//char map[51][51];
//int mun[2][2];
//int a = 0;
//int visited[51][51];
//int count;
//int mir = 888888888888;
//queue<pair<int, pair<int, int>>> q;
//
//int dx[4] = { 0,0, 1,-1 };
//int dy[4] = { 1, -1, 0,0 };
//int nowX, nowY, nextX, nextY, dir;
//bool check(int x, int y) {
//	if (x >= 0 && y >= 0 && x < N && y < N)return true;
//	return false;
//}
//void bfs() {
//	int ux, uy, dox, doy, rx, ry, lx, ly;
//
//	// 처음 시작에서 나아갈 방향 찾기
//	for (int i = 0; i < 4; i++) {
//		nextX = mun[0][0] + dx[i];
//		nextY = mun[0][1] + dy[i];
//		if (map[nextX][nextY] != '*' && check(nextX, nextY)) {
//			q.push({ i,{ nextX, nextY } });
//		}
//	}
//
//	//	! 찾거나 전진 
//	while (!q.empty()) {
//		dir = q.front().first;
//		nowX = q.front().second.first;
//		nowY = q.front().second.second;
//		q.pop();
//		if (nowX == mun[1][0] && nowY == mun[1][1]) {
//			if (mir > visited[nowX][nowY]) {
//				mir = visited[nowX][nowY];
//				continue;
//			}
//		}
//
//		if (map[nowX][nowY] == '.') {
//			int nx = nowX + dx[dir]; int ny = nowY + dy[dir];
//			if (map[nx][ny] != '*' && check(nx, ny)) {
//				visited[nx][ny] = visited[nowX][nowY];
//				q.push({ dir,{ nx,ny } });
//			}
//		}
//
//
//
//
//		if (map[nowX][nowY] == '!') {
//
//			if (dir == 0 || dir == 1) { //왼쪽 오른쪽은 거울 놓으면 위아래
//
//				ux = nowX + dx[3];  uy = nowY + dy[3];
//				dox = nowX + dx[2]; doy = nowY + dy[2];
//				if (check(ux, uy) && map[ux][uy] != '*') {
//					if (visited[ux][uy] >= visited[nowX][nowY] + 1 || visited[ux][uy] == 0) {
//						visited[ux][uy] = visited[nowX][nowY] + 1;
//						q.push({ 3,{ ux,uy } });
//					}
//				}
//				if (check(dox, doy) && map[dox][doy] != '*') {
//					if (visited[dox][doy] >= visited[nowX][nowY] + 1 || visited[dox][doy] == 0) {
//						visited[dox][doy] = visited[nowX][nowY] + 1;
//						q.push({ 2,{ dox,doy } });
//					}
//				}
//				int nx = nowX + dx[dir]; int ny = nowY + dy[dir];
//				if (map[nx][ny] != '*' && check(nx, ny)) {
//					if (visited[nx][ny] >= visited[nowX][nowY] || visited[nx][ny] == 0) {
//						visited[nx][ny] = visited[nowX][nowY];
//						q.push({ dir,{ nx,ny } });
//					}
//				}
//
//			}
//
//
//			else if (dir == 2 || dir == 3) {// 위아래는 거울놓으면 왼오
//				rx = nowX + dx[0]; ry = nowY + dy[0];
//				lx = nowX + dx[1]; ly = nowY + dy[1];
//
//				if (check(rx, ry) && map[rx][ry] != '*') {
//					if (visited[rx][ry] >= visited[nowX][nowY] + 1 || visited[rx][ry] == 0) {
//						visited[rx][ry] = visited[nowX][nowY] + 1;
//						q.push({ 0,{ rx, ry } });
//					}
//				}
//			}if (check(lx, ly) && map[lx][ly] != '*') {
//				if (visited[lx][ly] >= visited[nowX][nowY] + 1 || visited[lx][ly] == 0) {
//					visited[lx][ly] = visited[nowX][nowY] + 1;
//					q.push({ 1,{ lx, ly } });
//				}
//			}
//
//			int nx = nowX + dx[dir]; int ny = nowY + dy[dir];
//			if (map[nx][ny] != '*' && check(nx, ny)) {
//				if (visited[nx][ny] >= visited[nowX][nowY] || visited[nx][ny] == 0) {
//					visited[nx][ny] = visited[nowX][nowY];
//					q.push({ dir,{ nx,ny } });
//				}
//			}
//
//		}
//
//
//
//	}
//}
//
//
//
//
//
//int main() {
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++) {
//		scanf("%s", map[i]);
//		for (int j = 0; j < N; j++) {
//			if (map[i][j] == '#') {// 문 위치
//				mun[a][0] = i;
//				mun[a][1] = j;
//				a++;
//			}
//		}
//	}
//	bfs();
//	printf("%d\n", visited[mun[1][0]][mun[1][1]]);
//
//	return 0;
//}