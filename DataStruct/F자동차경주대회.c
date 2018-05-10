//#include<stdio.h>
//
//#define INF 0x4FFFFFFF
//
//int maxDis;
//int n;
//int d[111]; //거리
//int t[111];
//int tmp;
//
//int v[111];
//int s[111];
//int index = 0;
//int cnt;
//
//
//void solve() {
//	s[0] = 0;
//	for (int i = 1; i <= n + 1; i++) {
//		for (int j = i; j >= 0; j--) {
//			if (d[i] - d[j] <= maxDis) {
//				if (s[j] + t[i] < s[i]) {
//					s[i] = s[j] + t[i];
//					index = j;
//					v[i] = j;
//				}
//			}
//		}
//	}	
//}
//
//void path(int k) {
//	if (k == 0) {
//		printf("%d\n", cnt);
//		return;
//	}
//	else {
//		cnt++;
//		path(v[k]);
//		printf("%d ", k);
//
//	}
//}
//
//int main() {
//	
//	
//	scanf("%d", &maxDis);
//	scanf("%d", &n);
//	
//	int dis = 0;
//	
//	for (int i = 1; i <= n+1; i++) { // 누적거리 합
//		scanf("%d", &tmp);
//		d[i] = d[i - 1] + tmp;
//		s[i] = INF;
//
//	}
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &t[i]);
//	}
//	
//	solve();
//
//	if (s[n+1] == 0 ) {
//		printf("0\n");
//		return 0;
//	}
//	else {
//		printf("%d\n", s[n + 1]);
//		path(index);
//	}
//
//	return 0;
//}