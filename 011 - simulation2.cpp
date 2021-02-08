//Luka Mitrovic
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
//#include <bitset>

using namespace std;

struct Bucket {
	int c, m; // capacity and amount
};

void pour(Bucket *a, Bucket *b) {

	if (b->c - b->m >= a->m) {
		b->m += a->m;
		a->m = 0;
	} else {
		a->m -= b->c - b->m;
		b->m = b->c;
	}

}

int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	Bucket buckets[3];
	for (int i = 0; i < 3; i++) {
		cin >> buckets[i].c >> buckets[i].m;
	}
	//cout << buckets[2].c << " " << buckets[2].m << endl;

	for (int i = 0; i < 100; i++) {
		pour(&buckets[i%3], &buckets[(i+1)%3]);
		//cout << i%3 << " " << (i+1)%3 << endl;
	}

	for (int i = 0; i < 3; i++) {
		cout << buckets[i].m << endl;
	}

	return 0;

}
