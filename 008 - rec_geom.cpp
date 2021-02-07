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

	
	int a,b,c,d;
	cin >> a >> b >> c >> d;

	int ans;

	if (c <= a and d <= a)
		ans = d-c + b-a;
	else if (c <= a and d >= a)
		ans = max(d,b) - c;
	else if (c >= a and c <= b)
		ans = max(d,b) - a;
	else if (c >= a and c >= b)
		ans = d-c + b-a;

	cout << ans << endl;

	return 0;

}
