#include<stdio.h>

int N; //���
int UV[101][101]; // �ڿܼ�
int minUV=100000000; // �ڿܼ� �� �ּ�
int visited[303][303]; //�湮�� ��
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };
int nextX, nextY;
void dfs(int x, int y, int now) {
	visited[x][y] = 1;
	if (x == N - 1 && y == N - 1) { //����
		if (minUV > now) {
			minUV = now;
			printf("min uv %d\n", minUV);
		}
		return;
	}
	for (int i = 0; i < 4; i++) {
		nextX = x + dx[i];
		nextY = y + dy[i];
		if (nextX >= 0 && nextY >= 0 && nextX < N  && nextY < N) {
			if (visited[nextX][nextY] == 0) {
				printf("nextX = %d, nextY = %d, now = %d \n", nextX, nextY,now);
				dfs(nextX, nextY, now + UV[nextX][nextY]);
				visited[nextX][nextY] = 0;

			}
		}
	} 
}

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%1d", &UV[i][j]);
		}
	}
	dfs(0,0, UV[0][0]);
	printf("%d", minUV);
	
	return 0;
}