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

	string s;
	cin >> s;

	int ans = 0;

	int n = 26;
	vector<pair<int,int>> pairs(n,{0,0});

	for (int i = 0; i < s.length(); i++) {
		int curr = s[i] - 'A';
		if (pairs[curr].first == 0) {
			pairs[curr].first = i+1;
		} else {
			pairs[curr].second = i+1;
		}
	}

	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < 26; j++) {
			if (pairs[i].first < pairs[j].first && pairs[i].second < pairs[j].second && pairs[i].second > pairs[j].first) {
				cout << pairs[i].first << " " << pairs[i].second << " :: " << pairs[j].first << " " << pairs[j].second << endl;
				ans++;
			}
		}
	}

	cout << ans << endl;

	return 0;

}
