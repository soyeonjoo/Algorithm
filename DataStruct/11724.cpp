///* 연결요소 bfs 로 풀기 */
//#include<cstdio>
//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//int map[1001][1001];
//int visited[1001];
//bool started;
//int cnt= 0;
//int N, M;
//int x, y;
//
//
//void bfs(int root) {
//	visited[root] = 1;
//
//	queue<int> q;
//	q.push(root);
//	while (!q.empty()) {
//		int now = q.front();
//		q.pop();
//
//		for(int i =1; i<=N;i++)
//			if (!visited[i] && map[now][i] == 1) {
//				visited[i] =1;
//				q.push(i);
//			}
//	}
//
//	
//}
//
//int main() {
//	
//	scanf("%d %d", &N, &M);
//	for (int i = 0; i < M; i++) {
//		scanf("%d %d", &x, &y);
//		map[x][y] = map[y][x] = 1;
//	}
//	for (int i = 1; i <= N; i++) {
//		if (!visited[i]) {
//			cnt++;
//			bfs(i);
//		}
//	}
//	printf("%d", cnt);
//	return 0;
//}
//
