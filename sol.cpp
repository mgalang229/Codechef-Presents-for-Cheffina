#include <bits/stdc++.h>

using namespace std;

// https://www.codechef.com/START36C/problems/PRESENTS

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int factor = n / 5;
		cout << n - factor << '\n';
	}
	return 0;
}
