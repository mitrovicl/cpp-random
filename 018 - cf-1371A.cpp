//Luka Mitrovic
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		if (n == 1) {
			cout << 1 << endl;
		} else {
			cout << (n + 2 - 1)/2 << endl;
		}

	}

	return 0;

}
