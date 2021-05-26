#include <iostream>

using namespace std;

int result;

void DFS(int target, int sum) {
	if (target == sum) {
		result++;
		return;
	}
	else if (target < sum)
		return;

	DFS(target, sum + 1);
	DFS(target, sum + 2);
	DFS(target, sum + 3);
}

int main() {
	int test;
	cin >> test;

	int a;
	for (int i = 0; i < test; ++i) {
		cin >> a;
		DFS(a, 0);
		cout << result << endl;
		result = 0;
	}
}