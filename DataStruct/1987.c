/* ���ĺ� 1987 - dfs */

#include<stdio.h>
#include<stdlib.h>
//int R, C;
//int map[21][21];
//int alpha[26];
//int count=0;
//int max = 0;
//void dfs(int i, int j) {
//	if (i < 0 || i >= R || j < 0 || j >= C || alpha[map[i][j]-'A'] == 1)return;
//	alpha[map[i][j] - 'A'] = 1;
//	count++;
//	if (max < count) max = count;
//	dfs(i - 1, j);
//	dfs(i, j - 1);
//	dfs(i + 1, j);
//	dfs(i, j + 1);
//	count--;
//	alpha[map[i][j] - 'A'] = 0;
//
//
//}
//int main() {
//	char temp;
//	scanf("%d %d", &R, &C);
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			scanf("%c", &temp);
//			while (temp == '\n' || temp == '\0')
//				scanf("%c", &temp);
//				map[i][j] = temp;
//		}
//		
//	}
//	dfs(0,0);
//	printf("%d", max);
//
//	return 0;
//}
//==================���� Ǭ��
//char map[22][22];
//int alpha[26];
//int R, C; // R ���� C ���� 
//int max;
//int dr[4] = { 0, 0, 1, -1 };
//int dc[4] = { 1, -1, 0, 0 };
//
//void dfs(int r, int c, int cnt) {
//	int nr, nc;
//	if (cnt > max) max = cnt;
//	if (max == 26) return;
//
//	for (int i = 0; i < 4; i++) {
//		nr = r + dr[i];
//		nc = c + dc[i];
//		if (map[nr][nc] && !alpha[map[nr][nc] - 'A']) {
//			alpha[map[nr][nc] - 'A'] = 1;
//			dfs(nr,nc,cnt+1);
//			alpha[map[nr][nc] - 'A'] = 0; //��Ʈ��ŷ���� �湮�ϱ��� ���·� �ǵ����� �Ѵٴ°�. ������ ������ �� �õ��� �������ؼ� 
//
//
//		}
//	}
//
//}
//
//int main() {
//	scanf("%d %d", &R, &C);
//	for (int i = 0; i < R; i++) scanf("%s", &map[i][0]); // char ���޾����� �̷���
//	alpha[map[0][0] - 'A'] = 1;
//	dfs(0, 0, 1);
//	printf("%d", max);
//	return 0;
//}
