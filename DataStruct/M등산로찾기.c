//#include<stdio.h>
//
//#define INF (0x4FFFFFFF)
//int n;
//int ex, ey;
//int mount[102][102];
//int power[102][102];
//
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//
//typedef struct n {
//	int x;
//	int y;
//}q;
//
//q queue[1000000];
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
//	if (front == rear)
//		return 0;
//	else
//		return  1;
//}
//
//int bfs() {
//	int nextX, nextY;
//	int sum;
//	while (isEmpty()) {
//		q pop = deque();
//		for (int i = 0; i < 4; i++) {
//			nextX = dx[i] + pop.x;
//			nextY = dy[i] + pop.y;
//
//			if (nextX >= 0 && nextX < n+1 && nextY >= 0 && nextY < n+1) {
//				sum = mount[pop.x][pop.y] - mount[nextX][nextY];
//				if (sum < 0) {
//					sum *= sum;
//				}
//				sum += power[pop.x][pop.y];
//				if (power[nextX][nextY] > sum) {
//					power[nextX][nextY] = sum;
//					enque(nextX, nextY);
//
//				}
//			}
//
//		}
//	}
//	return power[ex][ey];
//}
//
//
//
//int main() {
//
//	scanf("%d", &n);
//	scanf("%d %d", &ex, &ey);// 정상위치
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			scanf("%d", &mount[i][j]);
//		}
//	}
//	for (int i = 0; i <= n + 1; i++) {
//		for (int j = 0; j <= n + 1; j++) {
//			power[i][j] = INF;
//			if (i == 0 || j == 0 || i == n + 1 || j == n + 1) {
//				enque(i, j);
//				power[i][j] = 0;
//			}
//		}
//	}
//
//	printf("%d", bfs());
//	return 0;
//}