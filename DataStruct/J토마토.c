//#include<stdio.h>
//int M, N;
//int box[1001][1001];
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//
//typedef struct n {
//	int x;
//	int y;
//	int day;
//}q;
//
//q queue[1000000];
//int front, rear;
//
//void enque(int x, int y, int day) {
//	q temp;
//	temp.x = x;
//	temp.y = y;
//	temp.day = day;
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
//	if (front == rear)
//		return 0;
//	else
//		return  1;
//}
//
//int bfs() {
//	int nextX, nextY;
//	int days = 0;
//	while (isEmpty()) {
//		q pop = deque();
//		int day = pop.day;
//		days = day - 1;
//
//		for (int i = 0; i < 4; i++) {
//			nextX = dx[i] + pop.x;
//			nextY = dy[i] + pop.y;
//
//			if (nextX >= 0 && nextX < M && nextY >= 0 && nextY < N) {
//				if (box[nextY][nextX] == 0) {
//					enque(nextX, nextY, day + 1);
//					box[nextY][nextX] = day + 1;
//				}
//			}
//
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			if (box[i][j] == 0) days = -1;
//		}
//	}
//	return days;
//}
//
//int main() {
//	scanf("%d %d", &M, &N);
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			scanf("%d", &box[i][j]);
//			if (box[i][j] == 1) enque(j, i, 1);
//		}
//	}
//	printf("%d", bfs());
//	return 0;
//}