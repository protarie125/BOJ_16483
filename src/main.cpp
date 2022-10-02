#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto t = double{};
	cin >> t;

	auto ans = static_cast<int>(round(pow(t / 2, 2)));
	cout << ans;

	return 0;
}