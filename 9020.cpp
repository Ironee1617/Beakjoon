#include <iostream>
#define MAX 10000
using namespace std;

int result[MAX] = { 0, };

int main()
{
	int A = 0, count = 0, num = 0;;
	result[1] = 1;



	for (int i = 2; i <= MAX; ++i) {
		if (result[i] == 1)
			continue;
		for (int j = i + i; j <= MAX; j += i)
			result[j] = 1;
	}
	cin >> num;

	while (num > 0) {
		int p1, p2;
		cin >> A;

		p1 = p2 = A / 2;
		while (true) {
			if (result[p1] == 0 && result[p2] == 0)
				break;
			else {
				p1--;
				p2++;
				if (result[p1] == 0 && result[p2] == 0)
					break;
			}
		}

		printf("%d %d\n", p1, p2);
		num--;
	}
}