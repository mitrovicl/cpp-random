//Luka Mitrovic
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
//#include <bitset>

using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
		freopen("promote.in", "r", stdin);
		freopen("promote.out", "w", stdout);
	#endif

	int bronze1, bronze2, silver1, silver2, gold1, gold2, platinum1, platinum2;
	cin >> bronze1 >> bronze2;
	cin >> silver1 >> silver2;
	cin >> gold1 >> gold2;
	cin >> platinum1 >> platinum2;

	int to_silver, to_gold, to_platinum;

	to_platinum = platinum2 - platinum1;
	to_gold = (gold2 + platinum2) - (gold1 + platinum1);
	to_silver = (platinum2 + gold2 + silver2) - (platinum1 + gold1 + silver1);

	cout << to_silver << endl;
	cout << to_gold << endl;
	cout << to_platinum << endl;


	return 0;

}
