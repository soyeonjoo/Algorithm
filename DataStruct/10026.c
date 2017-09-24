///* 10026 적록색약 dfs 적록색약인사람이랑 따로따로 계산하기 */
//#include<stdio.h>
//char map[101][101];
//int visited1[101][101]; //적록색약 아닌 사람
//int visited2[101][101]; //적록색약인 사람
//int N;
//int rgb, b;
//int fx[4] = { 0, 0, 1, -1 };
//int fy[4] = { 1, -1, 0,0 };
//
//void dfs1(int x, int y) { //적록색약 아닌사람 
//	visited1[x][y] = 1;
//	for (int i = 0; i < 4; i++) {
//		int nextX = x + fx[i];
//		int nextY = y + fy[i];
//		if (!visited1[nextX][nextY] && map[x][y] == map[nextX][nextY]) {
//			dfs1(nextX, nextY);
//		}
//	}
//}
//
//void dfs2(int x, int y) {// 적록색약인 사람
//	visited2[x][y] = 1;
//	for (int i = 0; i < 4; i++) {
//		int nextX = x + fx[i];
//		int nextY = y + fy[i];
//		if (!visited2[nextX][nextY] && ( (map[x][y] == map[nextX][nextY]) ||
//		   (map[x][y] == 'R' && map[nextX][nextY] == 'G') || (map[x][y] == 'G' && map[nextX][nextY] == 'R')) ) {
//			dfs2(nextX, nextY);
//		}
//	}
//}
//
//int main() {
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++) {
//			scanf("%s", &map[i]);
//		
//	}
//	for (int i=0;i <N;i++) for(int j = 0; j<N; j++)
//		if (!visited1[i][j]) {
//			rgb++;
//			dfs1(i, j);
//	}
//	printf("%d ", rgb);
//
//	for (int i = 0; i < N; i++) for (int j = 0; j < N; j++) {
//		if (!visited2[i][j]) {
//			b++;
//			dfs2(i,j);
//		}
//	}
//	
//
//	printf("%d", b);
//	return 0;
//}