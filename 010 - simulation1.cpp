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

	int shell1 = 0, shell2 = 0, shell3 = 0;

	int c[4] = {0, 1,2,3};

	for (int i = 0; i < n; i++) {
		int a,b,x;
		cin >> a >> b >> x;
		int t = c[a];
		c[a] = c[b];
		c[b] = t;  
		if (c[x] == 1)
			shell1++;
		else if (c[x] == 2)
			shell2++;
		else if (c[x] == 3)
			shell3++;
	}

	cout << max({shell1, shell2, shell3}) << endl;

	return 0;

}
