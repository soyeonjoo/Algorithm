//#include<stdio.h>
//
//int N; // 회의의 수
//int meet[501][3];
//int selectedMeet[501];
//
//void swap(int a, int b) {
//	int tmp;
//	tmp = meet[a][0];
//	meet[a][0] = meet[b][0];
//	meet[b][0] = tmp;
//
//	tmp = meet[a][1];
//	meet[a][1] = meet[b][1];
//	meet[b][1] = tmp;
//
//	tmp = meet[a][2];
//	meet[a][2] = meet[b][2];
//	meet[b][2] = tmp;
//}
//
//void timeSort(int t) {
//	for (int i = (t - 1); i >= 0; i--) {
//		if (meet[i][2] > meet[t][2]) {
//			swap(i, t);
//			t = i;
//		}
//		else if (meet[i][2] == meet[t][2] && meet[i][1] > meet[t][1]) {
//			swap(i, t);
//			t = i;
//		}
//		else break;
//	}
//}
//
//
//int meetSelect(int n) {
//	int tmp=0, cnt = 1;
//	selectedMeet[0] = 0;
//	for (int i = 1; i < n; i++) {
//		if (meet[tmp][2] <= meet[i][1]) {
//			tmp = i;
//			selectedMeet[cnt++] = i;
//		}
//	}
//	return cnt;
//
//}
//int main() {
//
//	scanf("%d", &N);
//	
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < 3; j++){
//			scanf("%d", &meet[i][j]);
//
//		}timeSort(i);
//	}
//
//	int m = meetSelect(N);
//	printf("%d\n", m);
//	for (int i = 0; i < m; i++) printf("%d ", meet[selectedMeet[i]][0]);
//	return 0;
//}
//
