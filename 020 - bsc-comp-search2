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
	int ans = 0;

	cin >> n >> m;

	vector<string> spotty(n);
	vector<string> plain(n);

	/* <Input> */
	for (int i = 0; i < n; i++)
		cin >> spotty[i];

	for (int i = 0; i < n; i++)
		cin >> plain[i];
	/* </Input> */


	for (int i = 0; i < m; i++) {
		bool good = true;
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				if (spotty[j][i] == plain[k][i]) {
					//cout << spotty[j][i] << " " << plain[k][i] << endl;
					good = false;
				}
			}
		}
		if (good) {
			ans++;
		}
	}

	cout << ans << endl;


	return 0;

}
