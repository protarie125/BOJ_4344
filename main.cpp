#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

ll c;
int n;
vi scores;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> c;
	while (0 < (c--)) {
		cin >> n;
		scores = vi(n);

		auto total = int{ 0 };
		for (auto&& x : scores) {
			cin >> x;
			total += x;
		}

		const auto avg = static_cast<double>(total) / n;
		auto ct = int{ 0 };
		for (const auto& x : scores) {
			if (avg < x) {
				++ct;
			}
		}

		auto ans = 100.0 * ct / n;
		ans = round(ans * 1000) / 1000;
		cout << fixed << setprecision(3) << ans << "%\n";
	}

	return 0;
}