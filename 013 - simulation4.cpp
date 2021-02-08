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

	int m,n,k;
	cin >> m >> n >> k;

	vector<string> small(m);
	vector<string> big(m*k);

	for (int i = 0; i < m; i++) {
		cin >> small[i];
		for (int j = 0; j < small[i].length(); j++) {
			for (int a = 0; a < k; a++) {
				big[i] += small[i][j];
			}
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			cout << big[i] << endl;
		}
	}

	return 0;

}
