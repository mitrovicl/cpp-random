//Luka Mitrovic
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
//#include <bitset>

using namespace std;

struct Rect {
	int x1, x2, y1, y2;
	int area() {
		int ar = (y2-y1) * (x2-x1);
		return ar;
	}
};

int intersect(Rect a, Rect b) {
	int x = max(0, min(b.x2, a.x2) - max(b.x1, a.x1));
	int y = max(0, min(b.y2, a.y2) - max(b.y1, a.y1));
	return x*y;
}

int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	Rect a,b,t;

	cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
	cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
	cin >> t.x1 >> t.y1 >> t.x2 >> t.y2;

	cout << a.area() + b.area() - intersect(a, t) - intersect(b, t);

	return 0;

}
