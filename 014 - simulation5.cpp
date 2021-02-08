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
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int x,y;
	cin >> x >> y;

	int distance = 0;
	int d = 1;
	int step = 1;
	int amount = 1;
	int current = x;

	if (x > y) {
		while (current != y) {
			if (step % 2 == 1) {
				current = x + d;
			} else {
				current = x - d;
			}
			if (step == 1)
				amount = 1;
			else if (step == 2)
				amount = 3;
			else
				amount *= 2;

			distance += amount;
			d *= 2;
			step++;
			if (current <= y) break;
		}
	} else if (x < y) {
		while (current != y) {
			if (step % 2 == 1) {
				current = x + d;
			} else {
				current = x - d;
			}

			if (step == 1)
				amount = 1;
			else if (step == 2)
				amount = 3;
			else
				amount *= 2;

			distance += amount;

			d *= 2;
			step++;
			if (current >= y) break;
		}
	}

	distance -= abs(current - y);

	cout << distance << endl;

	return 0;

}
