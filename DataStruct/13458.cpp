///* 13458 시험 감독*/
//
//#include<cstdio>
//using namespace std;
//
//long long N;
//long long a[10000002];
//long long b, c, sum=0;
//int i;
//int main() {
//
//	scanf("%lld", &N);
//
//	for (int i = 0; i < N; i++) {
//		scanf("%lld", &a[i]);
//	}
//	scanf("%lld %lld", &b, &c);
//	for (int i = 0; i < N; i++) {
//		a[i] -= b;
//		sum++;
//		if (a[i] > 0) sum += a[i] / c;
//		if (a[i] % c > 0) sum++;
//	}
//	printf("%lld\n", sum);
//	return 0;
//}