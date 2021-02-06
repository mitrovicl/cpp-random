//Luka Mitrovic
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
//#include <bitset>

using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
		freopen("buckets.in", "r", stdin);
		freopen("buckets.out", "w", stdout);
	#endif

	int bx, by, lx, ly, rx, ry;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			char ch;
			cin >> ch;
			if (ch == 'B') {
				bx = i;
				by = j;
			} else if (ch == 'L') {
				lx = i;
				ly = j;
			} else if (ch == 'R') {
				rx = i;
				ry = j;
			}
		}
	}

	//cout << by << " " << ry << " " << ly << endl;

	if (bx == lx && rx == bx && ((ry > ly && ry < by) or (ry > by && ry < ly)) ) {

		cout << abs(bx-lx) + abs(by-ly) + 1 << endl;
	} else if (by == ly && ry == by && ((rx > lx && rx < bx) or (rx > bx && rx < lx)) ) {
		cout << abs(bx-lx) + abs(by-ly) + 1 << endl;
	} else {
		cout << abs(bx-lx) + abs(by-ly) - 1 << endl;
	}

	return 0;

}
