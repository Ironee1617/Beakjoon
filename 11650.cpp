#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(vector<int> a, vector<int> b) {
	if (a[0] == b[0]) return a[1] < b[1];
	return a[0] < b[0];
}

int main() {
	int input;
	cin >> input;
	int x, y;
	vector<vector<int>> v(input, vector<int>(2, 0));
	for (int i = 0; i < input; ++i) {
		cin >> x >> y;
		v[i][0] = x;
		v[i][1] = y;
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); ++i) {
		cout << v[i][0] << " " << v[i][1] << "\n";
	}
}