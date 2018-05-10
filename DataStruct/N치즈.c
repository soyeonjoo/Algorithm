//#include <stdio.h>
//
//int r, c;
//int map[101][101];
//int visited[101][101];
//int dx[4] = { 1,0,-1,0 };
//int dy[4] = { 0,1,0,-1 };
//
//void dfs(int x, int y)
//{
//	int d;
//
//	if (x<0 || y<0 || x >= r || y >= c || visited[x][y]) return;
//	visited[x][y] = 1;
//
//	if (map[x][y])
//	{
//		map[x][y] = 0;
//		return;
//	}
//
//	for (d = 0; d<4; d++)
//		dfs(x + dx[d], y + dy[d]);
//}
//
//int main()
//{
//	int c1, c2;
//	scanf("%d %d", &r, &c);
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			scanf("%d", map[i] + j);
//		}
//	}
//	c1 = 0;
//	for (int t = 0;; t++)
//	{
//		c2 = 0;
//		for (int i = 0; i < r; i++) {
//			for (int j = 0; j < c; j++) {
//				c2 += map[i][j];
//			}
//		}if (!c2)
//		{
//			printf("%d\n%d", t, c1);
//			return 0;
//		}
//		c1 = c2;
//
//		for (int i = 0; i < r; i++) {
//			for (int j = 0; j < c; j++) {
//				visited[i][j] = 0;
//			}
//		}
//		dfs(0, 0);
//	}
//}