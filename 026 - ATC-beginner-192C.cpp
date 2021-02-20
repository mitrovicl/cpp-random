//Luka Mitrovic
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
int desc(int x) {
 
	string s = to_string(x);
	sort(s.begin(), s.end());
	
	int num = 0;
	for (int i = 0; i < s.length(); i++) {
		num += (s[i] - '0')*pow(10,i);
	}
 
	return num;
}
 
int asc(int x) {
	string s = to_string(x);
	sort(s.rbegin(), s.rend());
 
	int num = 0;
	for (int i = 0; i < s.length(); i++) {
		num += (s[i] - '0')*pow(10,i);
	}
	return num;
}
 
int getNum(int x) {
	return desc(x) - asc(x);
}
 
 
 
int main() {
 
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
 
	int n,k;
	cin >> n >> k;
 
	vector<int> arr(k);
	int last = n;
	int current = n;
 
	for (int i = 1; i <= k; i++) {
		current = getNum(last);
		last = current;
	}
 
	cout << current << endl;
 
	return 0;
 
}
