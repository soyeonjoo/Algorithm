///* 2589 보물섬 - 최단거리 문제 but 시작점이 여러개라 시작점에 따른 최단거리를 구해야하고 visit를 초기화 해줘서 최장거리를 구해야함*/
//
//#include<stdio.h>
//#include<stdlib.h>
//
//char map[51][51];
//int visit[51][51];
//int count, val, max;
//int vectX[4] = { 0,0,1,-1 };
//int vectY[4] = { 1,-1,0,0 };
//int M, N;
//
//
//typedef struct n {
//	int x;
//	int y;
//}q;
//
//q queue[10001];
//int front, rear;
//
//void enque(int x, int y) {
//	q temp;
//	temp.x = x;
//	temp.y = y;
//	queue[rear++] = temp;
//
//}
//q deque() {
//	q temp = queue[front++];
//	return temp;
//
//}
//
//int isEmpty() {
//
//		if (front == rear)
//			return 0;
//		else
//			return  1;
//}
//
//int bfs() {
//	int nextX, nextY;
//	while (isEmpty()) {
//		q pop = deque();
//	//	printf("front = %d, pop.x = %d, pop.y = %d, visit[%d][%d]= %d \n", front, pop.x, pop.y, pop.x, pop.y, visit[pop.x][pop.y]);
//		for (int i = 0; i < 4; i++) {
//			nextX = vectX[i] + pop.x;
//			nextY = vectY[i] + pop.y;
//
//			if (nextX >= 0 && nextX < N && nextY >= 0 && nextY < M) { // 행렬 크기안에서 움직이기 위해
//				if (map[nextX][nextY] == 'L'&& visit[nextX][nextY] == 0) { // 움직일수있는 L, 방문하지 않은 곳
//					visit[nextX][nextY] = visit[pop.x][pop.y] + 1;
//					enque(nextX,nextY);
//
//					//printf("i = %d, nextX = %d, nextY = %d, visit[%d][%d]= %d, rear = %d ", i, nextX, nextY,nextX,nextY, visit[nextX][nextY], rear);
//				}
//				if (visit[nextX][nextY] > count) {
//					count = visit[nextX][nextY];
//				//	printf(", count = %d ", count);
//				}
//			//	printf("\n");
//
//			}
//			
//		}
//		//printf("\n===================================\n\n\n");
//	}
//	return count;
//}
//
//int main() {
//	
//
//	scanf("%d %d", &N, &M); 
//	for (int i = 0; i < N; i++) {
//		scanf("%s", map[i]);
//	}
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			if (map[i][j] == 'L') { //L을 발견하면 그곳이 시작점
//				enque(i, j);
//				val = bfs();
//				memset(visit, 0, sizeof(visit) / sizeof(int));
//				if (val > max)
//					max = val;
//			}
//		}
//	}	printf("%d", max);
//
//	return 0;
//
//}
