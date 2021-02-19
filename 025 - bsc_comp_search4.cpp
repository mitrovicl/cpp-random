//Luka Mitrovic
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int getNum(char ch) {
	if (ch == 'A')
		return 1;
	else if (ch == 'T')
		return 2;
	else if (ch == 'G')
		return 3;
	else if (ch == 'C')
		return 4;

}

int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int n,m;
	cin >> n >> m;
	int sz = 100;

	vector<string> spotty(n);
	vector<string> plain(n);
	vector<bool> bools(sz, false); 

	for (int i = 0; i < n; i++) {
		cin >> spotty[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> plain[i];
	}

	int ans = 0;

	for (int i1 = 0; i1 < m-2; i1++) {
		for (int i2 = i1+1; i2 < m-1; i2++) {
			for (int i3 = i2+1; i3 < m; i3++) {
				for (int i = 0; i < n; i++) {
					bools[getNum(plain[i][i1])*16 + getNum(plain[i][i2])*4 + getNum(plain[i][i3])*1] = true;
				}
				bool good = true;
				for (int i = 0; i < n; i++) {
					if ((bools[getNum(spotty[i][i1])*16 + getNum(spotty[i][i2])*4 + getNum(spotty[i][i3])*1]) == true) {
						good = false;
						break;
					}
				}
				if (good) {
					ans++;
				}
				for (int i = 0;  i < sz; i++) {
					bools[i] = false;
				}
			}
		}
	}

	cout << ans << endl;
	
	return 0;

}
