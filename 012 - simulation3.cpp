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

	int n,m;
	cin >> n >> m;

	int ans = 0;
	vector<pair<int, int>> road(n);
	vector<pair<int, int>> bessie(n);

	for (int i = 0; i < n; i++) {
		cin >> road[i].first >> road[i].second;
	}

	for (int i = 0; i < n; i++) {
		cin >> bessie[i].first >> bessie[i].second;
	}

	int pr = 101;
	vector<int> r(pr);

	int seg = 0;
	int sum = road[0].first;
	for (int i = 1; i <= 100; i++) {
		if (i > sum) {
			seg++;
			sum += road[seg].first;
			r[i] = road[seg].second;
		} else {
			r[i] = road[seg].second;
		}
		//cout << r[i] << endl;
	}

	vector<int> b(pr);

	int seg1 = 0;
	int sum1 = bessie[0].first;
	for (int i = 1; i <= 100; i++) {
		if (i > sum1) {
			seg1++;
			sum1 += bessie[seg1].first;
			b[i] = bessie[seg1].second;
		} else {
			b[i] = bessie[seg1].second;
		}
		ans = max(ans, b[i] - r[i]);
		//cout << b[i] << endl;
	}

	cout << ans << endl;

	return 0;

}
