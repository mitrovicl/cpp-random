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
		freopen("teleport.in", "r", stdin);
		freopen("teleport.out", "w", stdout);
	#endif

	int a,b,x,y;
	cin >> a >> b;
	cin >> x >> y;

	int ans = min({abs(a-b), abs(a-x) + abs(y-b), abs(a-y) + abs(b-x)});

	cout << ans << endl;


	return 0;

}
