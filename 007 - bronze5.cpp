//Luka Mitrovic
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
//#include <bitset>

using namespace std;

int pos(string alph, char ch) {
	for (int i = 0; i < alph.length(); i++) {
		if (alph[i] == ch)
			return i;
	}
	return 1;
}

int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	string alph;
	string word;

	cin >> alph;
	cin >> word;

	int last = pos(alph, word[0]);
	int ans = 1;

	//cout << pos(alph, 'm') << " " << pos(alph, 'o') << " " << pos(alph, 'd');

	for (int i = 1; i < word.length(); i++) {
		//cout << pos(alph, word[i]) << endl;
		if (pos(alph, word[i]) <= last) {
			ans++;
		}

		last = pos(alph, word[i]);
	}

	cout << ans << endl;

	return 0;

}
