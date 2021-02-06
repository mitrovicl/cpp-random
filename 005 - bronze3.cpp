//Word Proc
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
//#include <bitset>

using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
		freopen("word.in", "r", stdin);
		freopen("word.out", "w", stdout);
	#endif

	int n,k;
	cin >> n >> k;

	int current_line = 0;

	for (int i = 0; i < n; i++) {
		string word;
		cin >> word;

		int len = word.length();
		if (current_line + len > k) {
			current_line = 0;
			current_line += len;
			cout << endl << word;
		} else {
			current_line += len;
			if (i == 0)
				cout << word;
			else
				cout << " " << word;
		}


	}


	return 0;

}
