///* 2668 숫자고르기*/
////#include<stdio.h>
////#include<stdlib.h>
////
////int N;
////int num[101][101];
////int temp[101]; // 뽑은 정수 저장
////int count = 0;
////int cmp(const void *a, const void*b) { return *(int *)a - *(int *)b; }
////void dfs(int x) {
////
////	if (x > N) return;
////	for (int i = 1; i <= N; i++) {
////
////		if (num[i][x] == num[x][i] && num[x][i] == 1) {
////			temp[count] = i;
////			//printf("temp[%d]는 num[%d][%d]ddd\n", count, x, i);
////			count++;
////			
////		}
////	}
////		dfs(++x);
////
////}
////
////int main() {
////	scanf("%d", &N);
////	int i,su;
////	for (i = 1; i <= N; i++) {
////		scanf("%d", &su);
////		num[i][su] = 1;
////
////	}
////	dfs(1);
////	printf("%d\n", count);
////	qsort(temp,count,sizeof(int),cmp);
////	for (int i = 0; i < count; i++) printf("%d\n", temp[i]);
////
////
////	return 0 ;
////}
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int N;
//int num[101];
//int check[101]; // 뽑은 정수 저장
//int count = 0;
//int cmp(const void *a, const void*b) { return *(int *)a - *(int *)b; }
//void dfs(int x) {
//
//	check[x] = 1;
//
//		if (num[] == num[num[x]] && check[num[x]] == false) {
//			dfs(i);
//		}
//
//	
//
//}
//
//int main() {
//	scanf("%d", &N);
//	int i;
//	for (i = 1; i <= N; i++) scanf("%d", num[i]);
//
//	for(int i = 1 ; i<= N ; i++) if(!check[i]) dfs(i);
//	printf("%d\n", count);
//	qsort(temp, count, sizeof(int), cmp);
//	for (int i = 0; i < count; i++) printf("%d\n", temp[i]);
//
//
//	return 0;
//}