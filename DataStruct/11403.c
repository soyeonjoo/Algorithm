///* 11430 - ���ã�� dfs ������ķ� �Է¹ް� ����ϱ� */
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int N;
//int visit[105];
//int map[105][105];
//int result[105][105];
//
//void input() {
//
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			scanf("%d", &map[i][j]);
//		}
//	}
//}
//
//void output() {
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			printf("%d ", result[i][j]);
//		}
//			printf("\n");
//		}
//	
//}
//
//void dfs(int start) {
//	
//	for (int i = 0; i < N; i++) {
//		if (map[start][i] == 1 && visit[i]!=1) {
//			visit[i] = 1;
//			dfs(i);
//		}
//	}
//}
//void visit_init() {
//	for (int i = 0; i < N; i++) {
//		visit[i] = 0;
//	}
//}
//
//int main() {
//	input();
//	for (int i = 0; i < N; i++) {
//		visit_init(); //// dfs�� ã���ٶ����� visit �ʱ�ȭ���Ѿ��� 
//		dfs(i);
//		for (int j = 0; j < N; j++) {
//			result[i][j] = visit[j];
//		}
//		
//	}
//	output(); 
//	return 0;
//
//}