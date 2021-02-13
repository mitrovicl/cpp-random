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

	int n,m;
	cin >> n >> m;

	int ans = 0;

	if (m <= n) {
		ans = n-m;
	} else {
		while (m != n) {
			if (m % 2 == 1) {
				ans++;
				m++;
			} else {
				if (m > n) {
					m /= 2;
					ans++;
				} else {
					ans++;
					m++;
				}
			}
		}
	}

	cout << ans << endl;


	return 0;

}
