//#include<cstdio>
//#include<cstring>
//#include<algorithm>
//
//using namespace std;
//int N, M;
//int map[504][504];
//int visited[504][504];
//int r; 
//int dx[4] = { 1, 0, -1, 0 };
//int dy[4] = { 0, 1, 0,-1 };
//
//
//
//
//bool check(int x, int y) {
//	if (x >= 0 && y >= 0 && x < N && y < M) return true;
//	return false;
//}
//int dfs(int x, int y , int c) {
//	int ret = map[x][y];
//	if (c == 4)return map[x][y]; //�������̶� ���ϱ⸸�ϸ��
//	visited[x][y] = 1;
//
//	for (int i = 0; i < 4; i++) {
//		int nextX = x + dx[i];
//		int nextY = y + dy[i];
//		if (check(nextX, nextY) && !visited[nextX][nextY])
//			ret = max(ret, map[x][y] + dfs(nextX, nextY, c + 1));
//	}
//	visited[x][y] = 0;
//	return ret;
//}
//
//
//int func(int x, int y) { // �Ǹ��
//	int ret = 0;
//	// ��
//	if (y - 1 >= 0 && x + 1 < N && x - 1 >= 0)
//		ret = max(ret, map[x][y] + map[x-1][y] + map[x+1][y] + map[x][y-1]);
//
//	// ��
//	if (x - 1 >= 0 && y + 1 < M && y - 1 >= 0)
//		ret = max(ret, map[x][y] + map[x][y + 1] + map[x - 1][y] + map[x][y - 1]);
//
//	// ��
//	if (y + 1 < M && x + 1 < N && x - 1 >= 0)
//		ret = max(ret, map[x][y] + map[x][y+1] + map[x-1][y] + map[x+1][y]);
//	// ��
//	if (x + 1 < N && y + 1 < M && y - 1 >= 0)
//		ret = max(ret, map[x][y] + map[x][y+1] + map[x][y-1] + map[x+1][y]);
//	return ret;
//}
//
//
//
//
//int main() {
//	scanf("%d %d", &N, &M); //���� ����
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			scanf("%d", &map[i][j]);
//		}
//	}
//
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			r = max(r, dfs(i, j, 1));
//			r = max(r, func(i, j)); // �� ǥ��
//		}
//	}
//	printf("%d\n", r);
//	return 0;
//}