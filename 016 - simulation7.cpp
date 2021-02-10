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

	int n;
	cin >> n;

	int sz = 27;
	vector<int> letters(sz);

	for (int i = 0; i < n; i++) {
		string w1, w2;
		cin >> w1 >> w2;
		
		vector<int> ltrs1(sz, 0);
		for (auto ch : w1) {
			ltrs1[(ch - 'a') + 1]++;
		}

		vector<int> ltrs2(sz, 0);
		for (auto ch : w2) {
			ltrs2[(ch - 'a') + 1]++;
		}

		for (int i = 1; i <= 26; i++) {
			letters[i] += max(ltrs1[i], ltrs2[i]);
		}
	}

	for (int i = 1; i <= 26; i++) {
		cout << letters[i] << endl;
	}

	return 0;

}
