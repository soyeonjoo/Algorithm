//#include<stdio.h>
//
//int N;
//int time;
//
//typedef struct _Sausage
//{
//	int length;
//	int width;
//} S;
//
//S sau[5000];
//
//void sort(){
//	int i, j;
//	S tmp;
//
//	for (i = 0; i < N - 1; i++){
//		for (j = i + 1; j < N; j++){
//			if (sau[i].width > sau[j].width){
//				tmp = sau[i];
//				sau[i] = sau[j];
//				sau[j] = tmp;
//			}
//		}
//	}
//}
//
//S sale(int index){
//	int i;
//	S sausage = sau[index];
//
//	for (i = index; i < N - 1; i++){
//		sau[i] = sau[i + 1];
//	}
//	N--;
//
//	return sausage;
//}
//
//void solve() {
//	S pre;
//
//	sort();
//	while (N){
//		pre = sale(0);
//
//		for (int i = 0; i < N; ){
//			if (sau[i].length >= pre.length){
//				pre = sale(i);
//			}
//			else i++;
//		}
//		time++;
//	}
//}
//
//int main()
//{
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++) {
//		scanf("%d %d", &(sau[i].length), &(sau[i].width));
//	}
//	solve();
//
//	printf("%d", time);
//	return 0;
//}
