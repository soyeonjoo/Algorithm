//#include<stdio.h>
//
//int N; // 직원 수
//int M; // 상하관계 개수
//int company[101][101]; //상하 관계
//int bonus[11]; //보너스 금액
//int selectBon[11]; 
//int payBon[11]; // 할당 된 보너스 금액
//
//void swap(int* a, int* b) {
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void quickSort(int * arr, int start, int end) {
//	if (start >= end) return;
//	int mid = (start + end) / 2;
//	int pivot = arr[mid];
//
//	swap(&arr[start],&arr[mid]);
//	
//	int left = start + 1, right = end;
//	
//	while (1) {
//		while(arr[left] > pivot) { left++; }
//		while (arr[right] <= pivot) { right--; }
//	
//		if (left > right) break;
//
//		swap(&arr[left],&arr[right]);
//	}
//	swap(&arr[start],&arr[right]);
//
//	quickSort(arr, start, right - 1);
//	quickSort(arr, right + 1, end);
//}
//
//
//
// int sort() {
//	int i, index = 0, temp;
//	for (i = 1; i < N; i++) {
//		if (bonus[index] < bonus[i]) index = i;
//	}
//	if (index != 0) {
//		temp = bonus[0];
//		bonus[0] = bonus[index];
//		bonus[index] = temp;
//	}
//	return 1;
//}
//
//
//int check(int n, int bon) {
//	for (int i = 0; i < N; i++) {
//		if (payBon[i] == 0) continue;
//		if ((company[n][i] == 1) && (payBon[i] >= bon)) return 0;
//		if ((company[i][n] == 1) && (payBon[i] <= bon)) return 0;
//	}
//	return 1;
//}
//
//int dfs(int n) {
//	if (n >= N) return 1; // 보너스 할당 끝!
//	for (int i = 1; i < N; i++) {
//
//		if (selectBon[i] == 1) continue;
//
//		if (check(n, bonus[i]) == 0)continue;
//
//		payBon[n] = bonus[i];
//		selectBon[i] = 1;
//
//		if (dfs(n + 1) == 1) return 1;
//
//		payBon[n] = 0;
//		selectBon[i] = 0;
//	}
//	return 0;
//}
//
//
//int main() {
//
//	int tmp1, tmp2;
//
//	scanf("%d %d", &N, &M);
//	for (int i = 0; i < M; i++) {
//		scanf("%d %d", &tmp1, &tmp2 );
//		company[tmp1-1][tmp2-1] = 1;
//	}
//
//	for (int i = 0; i < N; i++) scanf("%d", &bonus[i]);
//	sort();
//
//	quickSort(bonus,0,N-1);
//	payBon[0] = bonus[0];
//	selectBon[0] = 1;
//	dfs(1);
//	for (int i = 0; i < N; i++) printf("%d ", payBon[i]);
//	return 0;
//}