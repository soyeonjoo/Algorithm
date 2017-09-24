//
//#include <stdio.h>
//
//int Answer;
//int N;// ¼ıÀÚ°¹¼ö
//char number[1001];
//char odd[1001];
//int i = 0;
// 
//void dfs(int num) {
//	
//}
//int main(void)
//{
//	int T, test_case;
//		
//
//
//	setbuf(stdout, NULL);
//
//	scanf("%d", &T);
//	for (test_case = 0; test_case < T; test_case++)
//	{
//		int count[1001] = {0};
//
//		int size=0;
//		int k = 0;
//		scanf("%d", &N);
//		for (i = 0; i < N; ++i) {
//
//			scanf("%d", &k);
//			number[i] = k;
//			count[number[i]]++;
//		}
//		
//		for (i = 0; i < 100; ++i) {
//			if (count[i] != 0 && (count[i] % 2 == 1)) {
//				odd[size] = i;
//				size++;
//			}
//		}
//		Answer = odd[0];
//		for (i = 1; i < size; i++) {
//			Answer = Answer^odd[i];
//		}
//
//		printf("Case #%d\n", test_case + 1);
//		printf("%d\n", Answer);
//
//	}
//
//	return 0;//Your program should return 0 on normal termination.
//}