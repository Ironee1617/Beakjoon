#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int input = 0, answer = 0;

	cin >> input;

	vector<vector<int>> v(input, vector<int>(3, 0));

	int red, green, blue;
	vector<int> mv;
	for (int i = 0; i < input; ++i) {
		cin >> red >> green >> blue;
		v[i][0] = red;
		v[i][1] = green;
		v[i][2] = blue;
	}

	vector<vector<long long>> result(input, vector<long long>(3, 0));
	result[0][0] = v[0][0], result[0][1] = v[0][1], result[0][2] = v[0][2];

	for (int i = 1; i < v.size(); ++i) {
		result[i][0] = v[i][0] + min(result[i - 1][1], result[i - 1][2]);
		result[i][1] = v[i][1] + min(result[i - 1][0], result[i - 1][2]);
		result[i][2] = v[i][2] + min(result[i - 1][0], result[i - 1][1]);
	}

	sort(result[result.size() - 1].begin(), result[result.size() - 1].end());

	cout << result[result.size() - 1][0] << endl;

	return 0;
}