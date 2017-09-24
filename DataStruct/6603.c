///* 6603 ·Î¶Ç  dfs */
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int k;
//int map[12];
//int ans[6];
//void print(int now, int fill) {
//	int i;
//	if (now == 6) {
//		for (i = 0; i < 6; i++) printf("%d ", ans[i]); 
//		printf("\n");
//		return;
//	}
//	for (i = fill; i < k; i++) {
//		ans[now] = map[i];
//		print(now + 1, i + 1);
//	}
//}
//
//int main() {
//	
//	while (1) {
//		scanf("%d", &k);
//		if (k==0) break;
//		for(int i =0; i<k; i++) scanf("%d",&map[i]);
//		print(0,0);
//		printf("\n");
//	}
//	return 0;
//}