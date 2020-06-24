#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void decode() {
	int p1, p2, q1, q2;
	cin >> p1 >> p2 >> q1 >> q2;
	int r1 = q1 - p1;
	int r2 = q2 - p2;
	cout << r1 + q1 << " " << r2 + q2 << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
