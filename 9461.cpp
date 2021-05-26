#include <iostream>

using namespace std;
long long result[101] = { 0,1,1,1,2,2,3,4,5,7,9 };

long long memo(int N) {

	if (result[N] != 0) return result[N];
	else if (result[N] == 0) return result[N] = memo(N - 2) + memo(N - 3);
}

int main() {

	int input = 0;

	cin >> input;
	int inputs;

	for (int i = 0; i < input; ++i) {
		cin >> inputs;

		cout << memo(inputs) << endl;
	}

	return 0;
}