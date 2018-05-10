//#include<stdio.h>
//
//int N, L, M;
//int fish[100][2];
//int x, y;
//
//int main() {
//	int cnt = 0;
//	int max = 0;
//
//	scanf("%d %d %d", &N, &L, &M);
//	for (int i = 0; i < M; i++)
//		scanf(" %d %d", &fish[i][0], &fish[i][1]);
//	for (x = 1; x <= L / 2 - 1; x++) {
//		y = L / 2 - x;
//		for (int i = 0; i < M; i++)
//			for (int j = 0; j < M; j++) {
//				for (int k = 0; k < M; k++)
//					if (fish[k][0] >= fish[i][0] && fish[k][0] <= fish[i][0] + x&&fish[k][1] >= fish[j][1] && fish[k][1] <= fish[j][1] + y) cnt++;
//				if (max < cnt) max = cnt;
//				cnt = 0;
//			}
//	}
//	printf("%d", max);
//	return 0;
//}