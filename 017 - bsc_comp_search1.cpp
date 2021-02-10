//Luka Mitrovic
#include <bits/stdc++.h>

using namespace std;

int k,n;
int cows[11][21]; // Cows matrix (It's 11 and 21 because of 1-indexing)

bool checkPair(int first, int second) {

	bool firstBetter = true; 
	bool secondBetter = true;

	//Iterate over all practice sessions
	for (int i = 1; i <= k; i++) {
		for (int j = 1; j <= n; j++) {
			// Check if the first cow is better than the second cow (and the opposite)
			if (cows[i][first] > cows[i][second]) {
				// If the first cow did better at least once, then the 2nd one is not consistently better
				secondBetter = false;
			} else {
				// If the 2nd cow did better at least once, the the first one is not consistently better
				firstBetter = false;
			}
		}
	}

	// If there is at least one consistently better cow, return 1, else return 0
	return (firstBetter or secondBetter);

}

int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	cin >> k >> n;

	int ans = 0;

	// Input
	for (int i = 1; i <= k; i++) {
		for (int j = 1; j <= n; j++) {
			int num;
			cin >> num;
			// Input j-th cow, and assing it a rank
			// For example, if j == 1, and num == 3, then the cow number 3 is rank 1
			cows[i][num] = j;
		}
	}

 	// Iterate over all pairs
	for (int i = 1; i <= n; i++) {
		for (int j = i+1; j <= n; j++) {
			// If the pair is consistent, increase answer by 1, else increase it by 0
			ans += checkPair(i, j);
		}
	}

	// Print the answer
	cout << ans << endl;

	return 0;

}
