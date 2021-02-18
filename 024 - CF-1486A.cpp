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

		bool good = true;

		int n;
		cin >> n;
		vector<long long> arr(n);


		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		for (long long i = 0; i < n-1; i++) {
			if (arr[i] == i) {

			} else {
				if (arr[i] > i) {
					arr[i+1] += arr[i]-i;
					arr[i] = i;
				}
			}
		}



		for (long long i = 0; i < (long long)n-1; i++) {
			//cout << arr[i] << endl;
			if (arr[i] < arr[i+1]) {

			} else {
				good = false;
			}
		}

		if (n == 1) {
			good = true;
		}

		
		if (good) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}

	}

	return 0;

}
