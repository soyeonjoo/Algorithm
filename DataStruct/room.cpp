///* 방속의 거울 */
//
//
//#include <iostream>
//#include<cstring>
//using namespace std;
//
//int Answer;
//int N;
//int map[1001][1001];
//int mir[1001][1001];
//int dx[4] = { 1,0, -1,0 };
//int dy[4] = { 0,1, 0, -1 };
//
//int check(int x, int y) {
//	if (x >= 0 && y >= 0 && x < N && y < N) return true;
//	return false;
//}
//int change(int dir, int mirDir) {
//	if (mirDir == 2)
//	//
//		return (5-dir) %4 ;
//	else if(mirDir ==1)
//	// 0->3 3->0 1->2 2->1
//		return 3 - dir;
//
//}
//
//int main(int argc, char** argv)
//{
//	int T, test_case;
//
//	cin >> T;
//	for (test_case = 0; test_case < T; test_case++)
//	{
//
//		Answer = 0;
//	
//		scanf("%d",&N);
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				scanf("%1d", &map[i][j]);
//			}
//		}
//
//		int dir = 1;
//		int nowX = 0; 
//		int nowY = 0;
//		while (check(nowX, nowY)) {
//			if (map[nowX][nowY] != 0) {
//				//방향바꾸기
//				mir[nowX][nowY] = 1;
//				dir = change(dir, map[nowX][nowY]);
//			}
//
//			nowX = nowX + dx[dir];
//			nowY = nowY + dy[dir];
//		}
//
//		for (int i = 0; i < N; i++) for (int j = 0; j < N; j++) if (mir[i][j] == 1) Answer++;
//
//
//
//
//		cout << "Case #" << test_case + 1 << endl;
//		cout << Answer << endl;
//	
//		memset(mir, 0, sizeof(mir));
//		memset(map, 0, sizeof(map));
//
//	}
//
//	return 0;//Your program should return 0 on normal termination.
//}