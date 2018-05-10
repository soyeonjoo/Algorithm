/* 바텍 문제 1번 ewoosoft*/
//#include<iostream>
//#include<cstdio>
//#include<queue>
//#include<cstring>
//
//using namespace std;
//
//int N, a, b;
//
//char mir[201][201];
//char mirDir[201];
//int x[201];
//int y[201];
//
////우,상,좌,하
//int dx[4] = {0,-1,0,1};
//int dy[4] = {1,0,-1,0};
//
//int check = 1;
//
//
//
//int maxX, maxY, nowX, nowY, nextX, nextY;
//int dir;
//queue<pair<int, pair<int, int>>> q; // 방향, 좌표(x,y)
//
//
//
//bool mapCheck(int x1, int y1) { // 좌표 판별
//	if (x1 >= 0 && y1 >= 0 && x1 <= maxX && y1<= maxY)return true;
//	return false;
//}
//void bfs() {
//	int ux, uy, dox, doy, rx, ry, lx, ly;
//
//	q.push({ 0,{maxX,0} }); //존의 위치
//	
//							
//							
//	// 회전하거나 전진 
//	while (!q.empty()) {
//		dir = q.front().first;
//		nowX = q.front().second.first;
//		nowY = q.front().second.second;
//		q.pop();
//		if (nowX == maxX-b && nowY == a) {
//			check = 0;
//			return;
//		}
//
//
//		if (mir[nowX][nowY] == '/') {// 회전
//
//			if (dir == 0) {
//				nextX = nowX + dx[1];
//				nextY = nowY + dy[1];
//				if (mapCheck(nextX, nextY))
//					q.push({ 1,{ nextX,nextY } });
//			}
//			if (dir == 1) {
//				nextX = nowX + dx[0];
//				nextY = nowY + dy[0];
//				if (mapCheck(nextX, nextY))
//					q.push({ 0,{ nextX,nextY } });
//			}
//			if (dir == 2) {
//				nextX = nowX + dx[3];
//				nextY = nowY + dy[3];
//				if (mapCheck(nextX, nextY))
//					q.push({ 3,{ nextX,nextY } });
//			}
//			if (dir == 3) {
//				nextX = nowX + dx[2];
//				nextY = nowY + dy[2];
//				if (mapCheck(nextX, nextY))
//					q.push({ 2,{ nextX,nextY } });
//			}
//		}
//		else if (mir[nowX][nowY] == '\\') {
//
//			if (dir == 0) {
//				nextX = nowX + dx[3];
//				nextY = nowY + dy[3];
//				if (mapCheck(nextX, nextY))
//					q.push({ 3,{ nextX,nextY } });
//			}
//			if (dir == 1) {
//				nextX = nowX + dx[2];
//				nextY = nowY + dy[2];
//				if (mapCheck(nextX, nextY))
//					q.push({ 2,{ nextX,nextY } });
//			}
//			if (dir == 2) {
//				nextX = nowX + dx[1];
//				nextY = nowY + dy[1];
//				if (mapCheck(nextX, nextY))
//					q.push({ 1,{ nextX,nextY } });
//			}
//			if (dir == 3) {
//				nextX = nowX + dx[0];
//				nextY = nowY + dy[0];
//			
//				if (mapCheck(nextX, nextY))
//					q.push({ 0,{ nextX,nextY } });
//			}
//		}
//		else {//전진
//			nextX = nowX + dx[dir];
//			nextY = nowY + dy[dir];
//			if (mapCheck(nextX, nextY)) {
//				q.push({ dir,{ nextX,nextY } });
//			}
//		}
//
//
//
//	}
//
//
//
//		
//}
//
//
//
//int main() {
//	
//	scanf("%d %d %d", &N, &a, &b);
//	maxX = b;
//	maxY = a;
//	memset(mir,'.',sizeof(mir));
//	for (int i = 0; i < N; i++) {
//		scanf("%d %d %c", &y[i], &x[i], &mirDir[i]);
//		if (maxX < x[i]) maxX = x[i];
//		if (maxY < y[i]) maxY = y[i];
//	}
//
//	for (int i = 0; i < N; i++) {
//		mir[maxX - x[i]][y[i]] = mirDir[i];
//	
//	}
//
//	bfs();
//	if (check == 0) { //바꾸지 않아도 볼 수 있음
//		printf("%d\n", check);
//	}
//	else { //볼 수 없다면 거울 위치 바꾸기
//		for (int i = 0; i < N; i++) {
//
//			if (mir[maxX - x[i]][y[i]] =='/') {
//				mir[maxX - x[i]][y[i]] = '\\';
//				bfs();
//				mir[maxX - x[i]][y[i]] = '/';
//
//			}
//			else if(mir[maxX - x[i]][y[i]] == '\\') {
//				mir[maxX - x[i]][y[i]] = '/';
//				bfs();
//				mir[maxX - x[i]][y[i]] = '\\';
//			}
//
//			if (check == 0) { printf("%d", i+1); return 0; }
//		}
//		printf("-1\n");
//	}
//
//	return 0;
//}