///*14501 Επ»η*/
//
//#include<cstdio>
//#include<algorithm>
//#include<cstring>
//using namespace std;
// 
//int N,ret;
//int t[16], p[16], dp[16];
//
//int fun(int pos) {
//	if (pos == N + 1) return 0;
//	if (pos > N + 1) return -9876554321;
//	ret = dp[pos];
//	if (ret != -1) return ret;
//	return ret = max(fun(pos+1), fun(pos+t[pos])+p[pos]);
//}
//int main() {
//	
//	scanf("%d", N);
//	memset(dp, -1, sizeof(dp));
//	for (int i = 1; i <= N; i++) {
//		scanf("%d %d", &t[i], &p[i]);
//	}
//	printf("%d\n", fun(1));
//
//	return 0;
//}