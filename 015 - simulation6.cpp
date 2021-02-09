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

	vector<int> cows(n+1);
	vector<int> shuffles1(n+1);
	vector<int> shuffles(n+1);

	for (int i = 1; i <= n; i++) {
		cin >> shuffles1[i];
		//cout << shuffles1[i] << endl;
	}
	for (int i = 1; i <= n; i++) {
		shuffles[shuffles1[i]] = i;
	}

	for (int i = 1; i <= n; i++) {
		//cout << i << " " << shuffles[i] << endl;
		cin >> cows[i];
	}

	vector<int> temp(n+1);

	for (int s = 0; s < 3; s++) {
		for (int i = 1; i <= n; i++) {
			temp[shuffles[i]] = cows[i]; // cows {1,2,3,4,5} // shuffles {1, 5, 2, 3, 4}
			//cout << temp[i] << endl;
		}
		for (int i = 1; i <= n; i++) {
			cows[i] = temp[i];
			//cout << cows[i] << " ";
		}
		//cout << endl;
	}

	for (int i = 1; i <= n; i++) {
		cout << cows[i] << endl;
	}

	return 0;

}
