#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int x, n;
	cin >> x >> n;

	set<int> lights;
	multiset<int> gaps;

	lights.insert(0);
	lights.insert(x);
	gaps.insert(x);

	for (int i = 0; i < n; i++) {
		int position;
		cin >> position;

		auto right = lights.upper_bound(position);
		auto left = prev(right);

		gaps.erase(gaps.find(*right - *left));
		gaps.insert(position - *left);
		gaps.insert(*right - position);
		lights.insert(position);

		cout << *gaps.rbegin();
		if (i + 1 < n) {
			cout << ' ';
		}
	}

	cout << "\n";
	return 0;
}
