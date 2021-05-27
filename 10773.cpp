#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack<int> s;
	int t, inp, value = 0;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> inp;
		if (inp != 0) {
			s.push(inp);
		}
		else
		{
			s.pop();
		}
	}

	while (!s.empty()) {
		value += s.top();
		s.pop();
	}

	cout << value;
}