#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		bool negative = false;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			if (x < 0) {
				// if there is a negative value, set 'negative' to true
				negative = true;
			}
		}
		if (negative) {
			// the output is NO if there is a negative value
			cout << "NO\n";
			// continue the loop
			continue;
		}
		// otherwise, it is always POSSIBLE to create a "nice" array
		cout << "YES\n";
		// print 101 elements since we will use numbers from 0 to 100 (inclusive)
		cout << 101 << '\n';
		for (int i = 0; i <= 100; i++) {
			cout << i << " ";
		}
		cout << '\n';
	}
	return 0;
}
