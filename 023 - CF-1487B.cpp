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
		int n,k;
		cin >> n >> k;
 
		int a = n; // 2
		int b = 1;
 
		int ans = 0;
 
		if (n % 2 == 0) {
			ans = k % n;
			if (ans == 0) {
				ans = n;
			}
		} else {
			int a = n/2; // a = 1
			int first = n/2 + 1; // 2
			if (k >= first) { // k = 3
				ans = (k + (k-1)/a)%n; // 3 + 3/1 % n = 6%3 = 
				if (ans == 0) {
					ans = n;
				}
				//if (a == 1) ans--;
			} else {
				ans = k;
			}
		}
 
		cout << ans << endl;
 
	}
 
	return 0;
 
}
