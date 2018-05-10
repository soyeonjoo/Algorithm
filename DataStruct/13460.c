//#include<stdio.h>
//#include<stdlib.h>
//char map[11][11];
//char visited[11][11];
//int N, M;
//
//int count;
//
//
//int dx[4] = { 0,0, 1, -1 };
//int dy[4] = { 1,-1, 0, 0 };
//
//int compare(int a, int b) {
//	return a > b ? a : b;
//}
//void mapSearch(int dir, int redRow, int redCol, int blueRow, int blueCol, int  count) {
//	int i, j, ballCheck;
//	int nowRedCol, nowRedRow, nowBlueCol, nowBlueRow, nextRedCol, nextRedRow, nextBlueCol, nextBlueRow;
//	
//	if (count >= 10)return;
//
//	for (i = 0; i < 4; i++){
//		if(dir!= -1 && (i==dir||i==(dir+2)%4))continue;
//		
//		ballCheck = 0; 
//		nowRedRow = redRow;
//		nowRedCol = redCol;
//		nowBlueRow = blueRow;
//		nowBlueCol = blueCol;
//		for( j= 0 ;j <compare(N,M))
//	
//	
//	}
//
//}
//int main() { 
//	int i, j,redCol,redRow,blueRow, blueCol;
//	scanf("%d %d", &N, &M);
//
//	for (i = 0; i < N; i++) {
//		scanf("%s", &map[i]);
//		for (j = 0; j < M; j++) {
//			if (map[i][j] == 'R') {
//				redCol = j;
//				redRow = i;
//				map[i][j] = '.';
//			}
//			else if (map[i][j] == 'B') {
//				blueCol = j;
//				blueRow = i;
//				map[i][j] = '.';
//			}
//			else if (map[][] == '') {
//
//			}
//		}
//
//	}
//	mapSearch(-1, redRow, redCol, blueRow, blueCol, 0);
//
//	if (answer >= 10) {
//		answer = -1;
//	}
//	printf("%d", answer);
//	return 0;
//
//}