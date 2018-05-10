//#include<stdio.h>
//
//int N; // ¿¬ ÀÙÀÇ ¼ö
//int leaf[1001]; // ¿¬ ÀÙ ÁÂÇ¥
//int jump; // µµ¾àÇÏ´Â °æ¿ìÀÇ ¼ö
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
//		while(arr[left] <= pivot) { left++; }
//		while (arr[right] > pivot) { right--; }
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
//int main() {
//	scanf("%d", &N);
//
//	for (int i = 1; i <= N; i++) {
//		scanf("%d", &leaf[i]);
//	}
//
//	quickSort(leaf,1,N);
//
//	for (int i = 1; i <= N - 2; i++) {
//		for (int j = i + 1; j <= N - 1; j++) {
//			for (int k = j-1; k <= N; k++) {
//				if (leaf[j]-leaf[i] <= (leaf[k]-leaf[j]) && (leaf[k] - leaf[j] <= 2*(leaf[j]- leaf[i])) ) jump++;
//			}
//		}
//
//	}
//
//	printf("%d\n", jump);
//	return 0;
//}