///* 2589 ������ - �ִܰŸ� ���� but �������� �������� �������� ���� �ִܰŸ��� ���ؾ��ϰ� visit�� �ʱ�ȭ ���༭ ����Ÿ��� ���ؾ���*/
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
//		for (int i = 0; i < 4; i++) {
//			nextX = vectX[i] + pop.x;
//			nextY = vectY[i] + pop.y;
//
//			if (nextX >= 0 && nextX < N && nextY >= 0 && nextY < M) { // ��� ũ��ȿ��� �����̱� ����
//				if (map[nextX][nextY] == 'L'&& visit[nextX][nextY] == 0) { // �����ϼ��ִ� L, �湮���� ���� ��
//					visit[nextX][nextY] = visit[pop.x][pop.y] + 1;
//					enque(nextX,nextY);
//				}
//				if (visit[nextX][nextY] > count) {
//					count = visit[nextX][nextY];
//				}
//			}
//			
//		}
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
//			if (map[i][j] == 'L') { //L�� �߰��ϸ� �װ��� ������
//				enque(i, j);
//				val = bfs();
//			/*	for (int a = 0; a < N; a++) {
//					for (int b = 0; b < M; b++) {
//						visit[a][b] = 0;
//					}
//				}
//			*/
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
