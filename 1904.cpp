#include <iostream>
#define DE 15746

using namespace std;

int main() {

	int input = 0;


	cin >> input;

	int result[1000001];

	result[0] = 0, result[1] = 1, result[2] = 2;

	for (int i = 3; i <= input; i++) {
		result[i] = result[i - 1] + result[i - 2];
		result[i] %= DE;
	}

	cout << result[input] << endl;

	return 0;
}