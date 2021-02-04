//Luka Mitrovic
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
//#include <bitset>

using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin >> t;

	while (t--) {
		int n,a,b;
		cin >> n >> a >> b;  // n = string length, a = substring length, b = num of distinct letters in a substring

		string sub = "";
		string ans = "";

		for (int i = 0; i < a; i++) {
			if (b > 0) {
				char ch = 'a' + i;
				sub += ch;
				b--;
			} else {
				char ch = sub[sub.length() - 1];
				sub += sub[sub.length()-1];
			}
		}

		for (int i = 0; i < n; i++) {
			ans += sub[i%a];
		}

		/*
		for (int i = 0; i < n%a; i++) {
			ans += sub[i];
		} */

	    cout << ans << endl;

	}

	return 0;

}
