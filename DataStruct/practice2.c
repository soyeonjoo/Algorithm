//
//#include <stdio.h>
//#include<stdlib.h>
//int Answer;
//int asc(const void* x, const void* y) { return *(int*)x - *(int*)y; }
//
//int main(void)
//{
//	int T, test_case;
//	setbuf(stdout, NULL);
//
//
//	scanf("%d", &T);
//	for (test_case = 0; test_case < T; test_case++)
//	{
//		Answer = 0;
//		int N;
//		
//		scanf("%d", &N);
//		int max = 0;
//		int i;
//		int person[N];
//
//		for (int i = 0; i < N; i++) {
//			scanf("%d", &person[i]);
//		}
//
//		qsort(person, N, 4, asc);
//
//		for (i = 0; i < N; i++)
//		{
//			if (person[i] + N - i >= max) max = person[i] + N - i;
//		}
//		for (i = 0; i < N; i++)
//		{
//			if (person[i] + N >= max) Answer++;
//		}
//
//		printf("Case #%d\n", test_case + 1);
//		printf("%d\n", Answer);
//
//	}
//
//	return 0;//Your program should return 0 on normal termination.
//}