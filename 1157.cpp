#include <iostream>
#include <queue>


using namespace std;


int main() {
	char str[1000000];
	cin >> str;

	int abc[26] = { 0 };
	for (int i = 0; str[i] != '\0'; ++i) {
		int a = str[i] - 'A';
		if (a >= 32) a -= 32;
		abc[a]++;
	}

	int max = 0;
	queue<int> q;
	for (int i = 0; i < 26; ++i) {
		if (abc[i] >= max) {
			if (abc[i] > max) {
				if (!q.empty())
					while (!q.empty()) q.pop();
				q.push(i);
				max = abc[i];
			}
			else if (abc[i] == max)
				q.push(i);
		}
	}

	if (q.size() > 1)
		cout << "?" << endl;
	else {
		char ch = q.front() + 'A';
		cout << ch << endl;
	}
}