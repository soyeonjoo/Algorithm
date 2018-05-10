///* 9372 상근이의 여행*/
//#include<stdio.h>
//#include<queue>
//#include<cstdio>
//#include <algorithm>
//#include <iostream>
//#include<cstring>
//using namespace std;
//int map[10001][10001];
//int check[10001];
//
//int T;
//int cnt;
//int N, M;
//
//queue<int> q;
//void bfs(int x) {
//	check[x] = 1; q.push(x);
//
//	while (!q.empty()) {
//		int a = q.front(); q.pop();
//
//		for (int i = 1; i <= N ; i++) {
//			if (map[a][i] == 1 && check[i] ==0) {
//				check[i] = 1;
//				cnt++;
//				q.push(i);
//			}
//		}
//	}
//
//
//}
//int main() {
//	scanf("%d", &T);
//	while (T--) {
//		cnt = 0;
//		memset(map, 0, sizeof(int));
//		memset(check, 0, sizeof(int));
//		int a, b;
//		scanf("%d %d", &N, &M);
//
//		for (int i = 0; i < M; i++) {
//			scanf("%d %d", &a, &b);
//
//			map[a][b] = map[b][a] = 1;
//		}
//		bfs(1);
//		printf("%d\n", cnt);
//	}
//
//	return 0;
//}