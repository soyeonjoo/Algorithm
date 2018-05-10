///* 轨 伙己扁免 酒流 给前 k920049 */
//#include<cstdio>
//#include<vector>
//#include<iostream>
//#include<algorithm>
//
//
//using namespace std;
//
//int N, L;
//int dx[4] = {1, 0, -1, 0};
//int dy[4] = {0, -1, 0, 1};
//int a, c,  t;
//static int cx, cy;
//static long long ct;
//static int dir;
//
//const int INF = 0x3f3f3f3f;
//struct Line {
//	int x1, y1, x2, y2;
//	Line(int _x1, int _y1, int _x2, int _y2) : x1(_x1), y1(_y1), x2(_x2), y2(_y2) {
//
//	}
//};
//vector<Line> line;
//
//int main() {
//	t = 0;
//	scanf("%d", &L);
//	scanf("%d", &N);
//
//	line.push_back(Line(L + 1, -L - 1, L + 1, L + 1));
//	line.push_back(Line(-L - 1, -L - 1, L + 1, -L - 1));
//	line.push_back(Line(-L - 1, -L - 1, -L - 1, L + 1));
//	line.push_back(Line(-L - 1, L + 1, L + 1, L + 1));
//
//	N++;
//
//	while (N--) {
//		if (N >= 1) {
//			if (scanf("%d %c", &a, &c) != 2) {
//				return 1;
//			}
//
//		}
//		else {
//			a = INF + 10000;;
//		}
//
//		t = INF;
//		for (int i = 0; i < line.size(); i++) {
//			if (dir == 0) {
//				if (line[i].x1 == line[i].x2 && cx < line[i].x1 && line[i].y1 <= cy && cy <= line[i].y2) t = min(t,abs(line[i].x1-cx));
//				else if (line[i].y1 ==line[i].y2 && cy == line[i].y1 && cx< line[i].x1) t = min(t, abs(line[i].x1-cx));
//			}
//			else if (dir ==1) {
//				if (line[i].y1 == line[i].y2 && cy> line[i].y1 && line[i].x1 <= cx && cx <= line[i].x2) t = min(t,abs(line[i].y1 -cy));
//				else if (line[i].x1 == line[i].x2 && cx == line[i].x1 && cy > line[i].y2) t = min(t, abs(line[i].y2 - cy));
//			}
//			else if (dir == 2) {
//				if (line[i].x1 == line[i].x2 && cx > line[i].x1 && line[i].y1 <= cy && cy<= line[i].y2) t = min(t, abs(line[i].x2-cx));
//				else if (line[i].y1 == line[i].y2 && cy== line[i].y1 && cx > line[i].x2) t = min(t, abs(line[i].x2-cx));
//
//
//			}
//			else if (dir == 3) {
//				if (line[i].y1 == line[i].y2 && cy< line[i].y1 && line[i].x1 <= cx && cx <= line[i].x2) t = min(t, abs(line[i].y2-cy));
//				else if (line[i].x1 == line[i].x2 && cx == line[i].x1 && cy < line[i].y1) t = min(t, abs(line[i].y1-cy));
//			}
//
//		}
//		if (t > a) {
//			int nx = cx + dx[dir] * a;
//			int ny = cy + dy[dir] * a;
//
//			if (cx>nx || (cx == nx && cy>ny))
//				line.push_back(Line(nx,ny,cx,cy));
//			else
//				line.push_back(Line(cx,cy,nx,ny));
//		
//
//			if (c == 'L')
//				dir = (dir + 3) % 4;
//			else
//				dir = (dir + 1) % 4;
//		
//			cx = nx;
//			cy = ny;
//			ct += a;
//		}
//		else {
//			printf("%lld\n", ct + t);
//			return 0;
//
//		}
//	}
//	return 0;
//}