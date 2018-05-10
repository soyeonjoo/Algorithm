//#include <stdio.h>
//
//typedef struct
//{
//	int x, y;
//}QUEUE;
//typedef struct
//{
//	int x1, x2, y1, y2;
//}R;
//R d[20001], tmp[20001];
//QUEUE que[6000000];
//int n, m;
//int a[102][102], sol, chk[102][102], path[101], wr, rd;
//int dx[4] = { -1, 1, 0, 0 };
//int dy[4] = { 0, 0, 1, -1 };
//
//
//void mergesort(int s, int e)
//{
//	register int i, j, k, m;
//	if (s >= e) return;
//	m = (s + e) / 2;
//	i = k = s;
//	j = m + 1;
//	mergesort(s, m); mergesort(j, e);
//	while ((i <= m) || (j <= e))
//	{
//		if ((i > m) || ((j <= e) && ((d[i].x1 > d[j].x1) || ((d[i].x1 == d[j].x1) && (d[i].x2 > d[j].x2))))) tmp[k++] = d[j++];
//		else tmp[k++] = d[i++];
//	}
//	for (i = s; i <= e; i++) d[i] = tmp[i];
//}
//
//int light(int x, int y)
//{
//	register int i, t, s = 0;
//	t = path[x];
//	for (i = t;; i--)
//	{
//		if (d[i].x1 < x || d[i].x2 < y) break;
//		else if (d[i].x2 == y && !a[d[i].y1][d[i].y2])
//		{
//			a[d[i].y1][d[i].y2] = 1;
//			s++;
//		}
//	}
//	return s;
//}
//void bfs(void)
//{
//	register int i, tx, ty;
//	QUEUE temp;
//	while (wr != rd)
//	{
//		temp = que[rd++];
//		for (i = 0; i < 4; i++)
//		{
//			tx = temp.x + dx[i]; ty = temp.y + dy[i];
//			if (!a[tx][ty] || chk[tx][ty] >= sol) continue;
//			if (!chk[tx][ty])
//			{
//				chk[tx][ty] = sol + light(tx, ty);
//				sol = chk[tx][ty];
//			}
//			chk[tx][ty] = sol;
//			que[wr].x = tx;
//			que[wr++].y = ty;
//		}
//	}
//}
//int main(void){
//	int tc;
//	scanf("%d", &tc);
//	while (tc--) {
//		scanf("%d %d", &n, &m);
//		for (int i = 1; i <= m; i++)
//		{
//			scanf("%d %d %d %d", &d[i].x1, &d[i].x2, &d[i].y1, &d[i].y2);
//		}
//		mergesort(1, m);
//		for (int i = 1; i <= m; i++) path[d[i].x1] = i;
//		a[1][1] = 1;
//		chk[1][1] = light(1, 1);
//		sol = chk[1][1];
//		que[wr].x = 1;
//		que[wr++].y = 1;
//		bfs();
//
//		printf("%d", sol + 1);
//		return 0;
//	}
//}
