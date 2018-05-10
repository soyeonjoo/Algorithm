//
//#include<cstdio>
//#include<stdlib.h>
//
//using namespace std;
//
//
//int M, N, K;
//int x1, y1, x2, y2;
//int map[101][101];
//int a[101];
//int count;
//int dx[4] = { 1,0,-1, 0 };
//int dy[4] = { 0,1,0,-1 };
//
//
//
//int cmp( const void *a , const void *b) {
//	return *(int *)a - *(int*)b;
//}
//bool check(int  x, int y) {
//	if (x >= 0 && y >= 0 && x < N && y < M) return true;
//	return false;
//}
//void dfs(int x, int y) {
//	int nextX, nextY;
//
//	map[x][y] = 2;
//	for (int i = 0; i < 4; i++) {
//		nextX = x + dx[i];
//		nextY = y + dy[i];
//		if (check(nextX, nextY) && !map[nextX][nextY]) {
//			a[count]++;
//			dfs(nextX, nextY);
//		}
//
//	}
//	
//}
//int main() {
//	
//	scanf("%d %d %d", &M, &N, &K); //세로 가로
//
//	for (int i = 0; i < K; i++) {
//		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//		for (int j = x1; j< x2 ; j++)
//			for (int k = y1; k < y2 ; k++) 
//				map[j][k] = 1;
//	}
//	
//
//	for(int i = 0 ; i< N; i++)
//		for (int j = 0; j <M ; j++) {
//			if (map[i][j] == 0) {
//				
//				a[count]++;
//				
//				dfs(i,j);
//				count++;
//			}
//		}
//		qsort(a,count,4,cmp);
//		printf("%d\n", count);
//		for (int i = 0; i < count; i++) printf("%d ", a[i]);
//		return 0;
//}