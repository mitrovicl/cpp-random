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
		int n;
		cin >> n;
 
		int ans = n;
 
		vector<int> arr(n);
		int minimal = INT_MAX;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			minimal = min(minimal, arr[i]);
		}
 
		for (int i = 0; i < n; i++) {
			if (arr[i] == minimal) {
				ans--;
			}
		}
 
		cout << ans << endl;
	}
 
	return 0;
 
}
