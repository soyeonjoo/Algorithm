//#include<stdio.h>
//
//int N; // ������ ��
//int budget[10001]; // ������ ����
//int totalBudget; // �� ����
//int max; // �ִ� ��û ����
//
//int cal(int left ) {
//	int mid, tmp;
//	int right = max;
//
//
//	while (left <= right) {
//		mid = (left + right) / 2;
//		tmp = 0;
//		for (int i = 0; i < N; i++) {
//			if (budget[i] > mid) tmp += mid;
//			else tmp += budget[i];
//		}
//
//		if (tmp > totalBudget) right = mid - 1;
//		else left = mid + 1;
//	}
//
//	return right;
//}
//
//int main() {
//
//	scanf("%d", &N);
//
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &budget[i]);
//		if (budget[i] > max) max = budget[i];
//	}
//
//	scanf("%d", &totalBudget);
//
//	printf("%d", cal(0));
//
//	return 0;
//}